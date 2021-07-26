# SEAT HEATING APPLICATION

### OBJECTIVE:
The Seat Heating control system is basically used to control the temperature of a car seat. When a passanger or a driver of the car seats on a car, the button sensor gets activated (which acts as one switch). After that, the user has to turn on the heater(which acts as another switch). The temperature sensor keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through UART (through serial communication)

### CI and Code quality:
|Cppcheck|Build|Codacy|
|---|---|---|
|[![Cppcheck](https://github.com/256644/LttsEmbeddedc/actions/workflows/code.yml/badge.svg)](https://github.com/256644/LttsEmbeddedc/actions/workflows/code.yml)|[![Compile-Linux](https://github.com/256644/LttsEmbeddedc/actions/workflows/compile.yml/badge.svg)](https://github.com/256644/LttsEmbeddedc/actions/workflows/compile.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/6d0c2956e64a4cfa9bb14f55a17301b0)](https://www.codacy.com/gh/256644/LttsEmbeddedc/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=256644/LttsEmbeddedc&amp;utm_campaign=Badge_Grade)|


### SIMULATION RESULTS:

![image](https://user-images.githubusercontent.com/69230664/127031627-06e5a6f9-3c53-498f-8d42-3c2667902d8c.png)


----
## ACTIVITY 1
 
### If the user seated onto the seat and then he had turned on the heatbutton , only then the led should turn on.
|LOGIC STATE |LED STATUS|
|---|---|
|0  0|  OFF|
|0 1|OFF|
|1 0 |OFF|
|1 1 |ON|
### Simulation results

|![image](https://user-images.githubusercontent.com/69230664/127032661-cfdbc6c9-7d01-4980-abc8-2da6f12f5548.png)|![image](https://user-images.githubusercontent.com/69230664/127032805-90c7eb64-2d28-405d-97d9-3519eb466ee8.png)|![image](https://user-images.githubusercontent.com/69230664/127032884-a63763fb-0f02-44fa-83e5-b50581ebaec5.png)|
|---|---|---|
|Both switch are open(0 0)|Either of switch is open (0 1 or 1 0)|Both switch are closed(1 1)|




----
## ACTIVITY 2
  
### To take input from temp sensor and to indicate changes at a particular temparture.
Since temp sensor is not availaible in simulide I made use of potentiometer and calculated the voltages for particuar range.


|Analog Value|Status|
 |---|---|
 |0-200|B1 LED on|
|	210-500|	B2 LED on|
|	510-700	|B3 LED on|
|	710-1024|	B4 LED on|

### Simulation Results:
![image](https://user-images.githubusercontent.com/69230664/127034792-cde7bfab-0242-4c86-a596-0b12ef45ba55.png)


----
## ACTIVITY 3

### To generate pwm at different analog values.

|ADC Value(Temp Sensor)|Output PWM|
|---|---|
|0-200 |20%| 
|210-500 |40%| 
|510-700 |70% |
|710-1024| 95% |

### Simulation Results:

|![image](https://user-images.githubusercontent.com/69230664/127035452-40699664-2fc0-4164-b646-885053ff829d.png)|![image](https://user-images.githubusercontent.com/69230664/127035515-55731505-ef44-4635-94b1-5e0179a85a75.png)|![image](https://user-images.githubusercontent.com/69230664/127036406-a73e8ac6-ae72-4794-99a3-154970db4b87.png)|![image](https://user-images.githubusercontent.com/69230664/127036472-702abf6e-ebfb-4839-87d9-f453200f799b.png)|
|---|---|---|---|
|Output PWM-20%|Output PWM-40%|Output PWM-71%|Output PWM-95%|

## ACTIVITY 4
### To send the temperature value to a Serail monitor.

![image](https://user-images.githubusercontent.com/69230664/127036538-569a92eb-41e0-47a6-a32b-4e14e6d72c2e.png)

