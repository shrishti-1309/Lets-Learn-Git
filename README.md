# SEAT HEATING APPLICATION

### OBJECTIVE:
The Seat Heating control system is basically used to control the temperature of a car seat. When a passanger or a driver of the car seats on a car, the button sensor gets activated (which acts as one switch). After that, the user has to turn on the heater(which acts as another switch). The temperature sensor keeps monitoring and recording the temperature and sends the analog value to the microcontroller ATmega328. The microcontroller takes the analog input of the temperature sensor and gives output a temperature value through UART( through serial communication)


### SIMULATION RESULTS:

![image](img/41.jpeg)

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

|![image](img/11.jpeg)|![image](img/12.jpeg) |![image](img/13.jpeg)|
|---|---|---|
|Both switch are open(0 0)|Either of switch is open (0 1 or 1 0)|Both switch are closed(1 1)|




----