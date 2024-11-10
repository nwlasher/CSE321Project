# CSE321Project
This project contains version history of prototype code for a simple line follower. This project is for the CSE-321 course at the university at buffalo, and the purpose is to become comfortable with the software/hardware integration and design process for a real-time embedded system.

The Main code that as of 11/10/24 represents the base functionality of the line follower can be found in the folder labeled "Main_code_prototype". Previous (some completely unsuccesful) iterations of the main code can be found in the folder labeled "Previous iterations of main code". Tests and functionality that we were unable to get working to include before the prototype deadline can be foound in the folder labeled "Archived code or TBD inclusion" some of these may be cut from the final product as well.

Hardware test scripts that are used to validate both hardware integrity and correct input/output of the arduino are located in the folder labeled "Hardware test scripts" and includes serial monitored tests for:

-Ir sensors, to ensure they are calibrated correctly, the output around 1.5 cm above the target area should read < 35 when "triggered" and > 1000 when idle. Once on the course the sensors will read as constantly triggered, it's when a dark guide line is within the target sensing area that the sensor become "idle" and triggers a software event. An LED is placed at the output to each motor to check that each sensor triggers the corresponding side correctly.

-DC Motors, This test ensures the power supply to the circuit is enough to drive the motors and that both motors are functioning with the proper response time. Both motor control signals are connected to pin 13 to see that both of the motors turn on and off along with the onboard LED of the arduino.

Line following test proceedures and courses can be found in the project documentation.

