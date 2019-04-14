
# Google SoC 2019

# [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#low-power-interrupt-based-drivers-in-c%C3%A9u-arduino)Low-Power Interrupt-Based Drivers in Céu-Arduino

## [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#tasks-completed--)Tasks Completed :-

### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#task-1--installing-ceu-and-ceu-arduino)[](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples/README.md#task-1--installing-ceu-and-ceu-arduino)Task 1 : Installing Ceu and Ceu-Arduino

Ceu-Arduino was succesfully set-up in an fresh Ubuntu 18.04 LTS VM and the examples were tested and run on an Arduino Uno development board.

### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#task-2--create-a-ceu-arduino-example-using-any-sensor-or-actuator)[](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples/README.md#task-2--create-a-ceu-arduino-example-using-any-sensor-or-actuator)Task 2 : Create a Ceu-Arduino Example using any Sensor or Actuator

[![](https://camo.githubusercontent.com/bf5dc285462e6ad64e73f7b54ce220313c001459/68747470733a2f2f64726976652e676f6f676c652e636f6d2f75633f6578706f72743d766965772669643d3143305a7769665936335077636d68766768627848456e694677436f7a74467934)](https://drive.google.com/uc?export=view&id=1C0ZwifY63PwcmhvghbxHEniFwCoztFy4)

Interrupt driven Analog read is made on a LDR (Light Dependent Resistor) that senses the voltage across the voltage divider based on the amount of light intensity on it. If, the luminosity levels are too low, the digital pin 13 is set HIGH. The pin is thus connected to both the Built-in LED and an external RED-Led. The analog reads is also transmitted via. USART @9600 baud.

### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#task-3--create-a-simple-example-in-c-and-ceu-arduino-that-uses-interrupt-driven-analog-reads)[](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#task-3--create-a-simple-example-in-c-that-uses-interrupt-driven-analog-reads)Task 3 : Create a simple example in C and Ceu-Arduino that uses interrupt-driven analog reads

[![](https://camo.githubusercontent.com/b19cf139e112fac41e650d24543f1f4f0d7d126b/68747470733a2f2f64726976652e676f6f676c652e636f6d2f75633f6578706f72743d766965772669643d3131435065744c6672414663736d73575a3431584a4a767a7a3632787856757352)](https://drive.google.com/uc?export=view&id=11CPetLfrAFcsmsWZ41XJJvzz62xxVusR)

ADC interrupts by configuring ADMUX register to a reference voltage and to take input from A0 pin. Setting up the ADCSRA register to enable auto-triggering, setting up the pre-scalar, and enabling interrupts in ADC. We kickstart the conversion by setting the ADSC bit. The right adjusted result is thus read and checked if its above threshold, than the Built-in Led is turned HIGH .

### [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#task-4--fork-c%C3%A9u-arduino-project-on-github-and-commit-the-new-examples)[](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples/README.md#task-4--fork-c%C3%A9u-arduino-project-on-github-and-commit-the-new-examples)Task 4 : Fork Céu-Arduino project on github and commit the new examples

The prerequisites file and more implementation on ceu-arduino have been uploaded to  [link](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples)

## [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#adding-a-bh1750-sensor-library-built-on-top-of-another-driver-wireh)Adding a BH1750 sensor: Library built on top of another driver (wire.h)

[![](https://camo.githubusercontent.com/8b0332ff5fcfe366ebae96a1d2ea760e20c84055/68747470733a2f2f64726976652e676f6f676c652e636f6d2f75633f6578706f72743d766965772669643d31774a5270596136724e797563436565466652795a374b3532714c6b5547376757)](https://drive.google.com/uc?export=view&id=1wJRpYa6rNyucCeeFfRyZ7K52qLkUG7gW)

Sensing light intensity (Unit: Lux) using an Inter-IC based sensor.
The code to the implementation is in  [ceu-arduino/ceu-samples/BH1750_I2C_01.ceu](https://github.com/stephenmasih/ceu-arduino/blob/master/ceu-samples/BH1750_I2C_01.ceu)


## [](https://github.com/stephenmasih/ceu-arduino/tree/master/ceu-samples#adding-a-MPU-6050-sensor-built-on-top-of-another-driver-wire.h) **MPU-6050  Six-Axis (Gyro + Accelerometer) MEMS MotionTracking™ Devices with UNO using ceu-Arduino**
[![](https://drive.google.com/uc?export=view&id=1YwtsUiWDOsM9DoFgBXxXAjFpImaQ_bEB)](https://drive.google.com/uc?export=view&id=1YwtsUiWDOsM9DoFgBXxXAjFpImaQ_bEB)

The MPU-6050 **breakout** combine a **3-axis gyroscope** and a **3-axis accelerometer** on the same silicon chip, together with an onboard  **Digital Motion Processor**  , which processes complex 6-axis Motion Fusion algorithms. The device can be connected to external magnetometers or other sensors through an **auxiliary master** I2C bus, allowing the devices to gather a full set of sensor data.

Sensing the axes of both  **Gyroscope** and **Accelerometer** as well reading an **Internal on-chip temperature sensor**.
The **code** to the implementation is in  [ceu-arduino/ceu-samples/MPU-6050_I2C_02.ceu](https://github.com/stephenmasih/ceu-arduino/blob/master/ceu-samples/MPU-6050_I2C_02.ceu)
