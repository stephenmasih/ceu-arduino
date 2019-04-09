# Google SoC 2019 


# Low-Power Interrupt-Based Drivers in Céu-Arduino



## Tasks Completed :-

### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples/README.md#task-1--installing-ceu-and-ceu-arduino)Task 1 : Installing Ceu and Ceu-Arduino

Ceu-Arduino was succesfully set-up in an fresh Ubuntu 18.04 LTS VM and the examples were tested and run on an Arduino Uno development board.

### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples/README.md#task-2--create-a-ceu-arduino-example-using-any-sensor-or-actuator)Task 2 : Create a Ceu-Arduino Example using any Sensor or Actuator

[![LDR_STREETIGHTS](https://raw.githubusercontent.com/stephenmasih/ceu-arduino/master/ceu-samples/LDR_STREETLIGHTS.png)](https://raw.githubusercontent.com/stephenmasih/ceu-arduino/master/ceu-samples/LDR_STREETLIGHTS.png)

Interrupt driven Analog read is made on a LDR (Light Dependent Resistor) that senses the voltage across the voltage divider based on the amount of light intensity on it. If, the luminosity levels are too low, the digital pin 13 is set HIGH. The pin is thus connected to both the Built-in LED and an external RED-Led. 
The analog reads is also transmitted via. USART @9600 baud. 

### [](#task-3--create-a-simple-example-in-c-that-uses-interrupt-driven-analog-reads)Task 3 : Create a simple example in C and Ceu-Arduino that uses interrupt-driven analog reads

[![potentiometer_adc_interrupts](https://raw.githubusercontent.com/stephenmasih/ceu-arduino/master/ceu-samples/potentiometer_adc_interrupts.png)](https://raw.githubusercontent.com/stephenmasih/ceu-arduino/master/ceu-samples/potentiometer_adc_interrupts.png)

ADC interrupts by configuring ADMUX register to a reference voltage and to take input from A0 pin.
Setting up the ADCSRA register to enable auto-triggering, setting up the pre-scalar, and enabling interrupts in ADC. We kickstart the conversion by setting the ADSC bit.
The right adjusted result is thus read and checked if its above threshold, than the Built-in Led is turned HIGH .


### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples/README.md#task-4--fork-c%C3%A9u-arduino-project-on-github-and-commit-the-new-examples)Task 4 : Fork Céu-Arduino project on github and commit the new examples

The prerequisites file and more implementation on ceu-arduino have been uploaded to [link](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples) 




## Adding a BH1750 sensor: Libraries built on top of other drivers (wire.h) 

[![](https://raw.githubusercontent.com/stephenmasih/ceu-arduino/master/ceu-samples/BH1750_Arduino_UNO.png)](https://raw.githubusercontent.com/stephenmasih/ceu-arduino/master/ceu-samples/BH1750_Arduino_UNO.png)

The code to the implementation is in [ceu-arduino/ceu-samples/BH1750_I2C_01.ceu](https://github.com/stephenmasih/ceu-arduino/blob/master/ceu-samples/BH1750_I2C_01.ceu)

