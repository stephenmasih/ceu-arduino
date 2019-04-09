volatile int readFlag;
volatile int analogVal;
void setup()
{  
  Serial.begin(9600);
  // clear ADLAR in ADMUX to right-adjust the result; ADCL will contain lower 8 bits, ADCH upper 2 (in last two bits)
  ADMUX &= B11011111;
  
  // Set REFERENCE VOLTAGE in ADMUX
  ADMUX |= B01000000;
  
  // Clear MUX in ADMUX
  ADMUX &= B11110000;
  
  // Set MUX to A0   
  ADMUX |= B00000000;
  
  // Set ADEN in ADCSRA to enable the ADC.
  ADCSRA |= B10000000;
  
  // Set ADATE in ADCSRA to enable auto-triggering.
  ADCSRA |= B00100000;
  
  // Set the Prescaler to 128 (16000KHz/128 = 125KHz)
  ADCSRA |= B00000111;
  
  // Set ADIE in ADCSRA to enable the ADC interrupt.
  ADCSRA |= B00001000;

  // Included from <avr/interrupts.h>
  sei();
  readFlag = 0;
  // Set ADSC in ADCSRA to start the ADC conversion
  ADCSRA |=B01000000;
}

void loop()
{
  // Check to see if the value has been updated
  if (readFlag == 1)
  {  
    Serial.println(analogVal);
    readFlag = 0;
  }  
}


// Interrupt service routine for the ADC completion
ISR(ADC_vect)
{
  readFlag = 1;
  analogVal = ADCL | (ADCH << 8);
}
