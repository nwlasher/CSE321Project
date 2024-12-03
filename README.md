# CSE321Project
This project contains version history of prototype code for a simple line follower. This project is for the CSE-321 course at the university at buffalo, and the purpose is to become comfortable with the software/hardware integration and design process for a real-time embedded system. As "simple" as this line follower seemed at first, the project has been very rewarding in that i have had to solve issues involving everything from power and current requirement throughs circuit analysis to software integrationd and 3D design/printing. Especially since I set out on this project with the goal to design my own implementation of a simple line-following device without using youtube tutorials, other than for common hardware such as the chassis and motor mounts. I plan to use what i've learned to create a more sophisticated project in the future that builds upon this project. Whether that be a faster/more accurate line follower or another device that uses a line-track to complete it's task. 

The Main code that as of 12/3/24 represents the full functionality of the line follower can be found in the folder labeled "Main_code_prototype". Previous (some completely unsuccesful) iterations of the main code can be found in the folder labeled "Previous iterations of main code". Tests and functionality that we were unable to get working to include before the prototype deadline can be foound in the folder labeled "Archived code or TBD inclusion" some of these may be cut from the final product as well.

Hardware test scripts that are used to validate both hardware integrity and correct input/output of the arduino are located in the folder labeled "Hardware test scripts" and includes serial monitored tests for:

-Ir sensors, to ensure they are calibrated correctly, the output around 1.5 cm above the target area should read < 35 when "triggered" (i.e. only one onboard LED is ON) and > 1000 when "idle" (i.e both onboard LEDs are ON). Note that the definitions of "triggered" and "idle" are defined in this project opposite of the true states of the IR sensor. Once on the course the sensors will read constanly , it's when a dark guide line is within the target sensing area that the sensor become "idle" and triggers a software event. An LED is placed at the output to each motor to check that each sensor triggers the corresponding side correctly.

-DC Motors, This test ensures the power supply to the circuit is enough to drive the motors and that both motors are functioning with the proper response time. Both motor control signals are connected to pin 13 to see that both of the motors turn on and off along with the onboard LED of the arduino.

Each of these test will have to be manually uploaded to the arduino for thorough component-wise testing, but a serial-monitoring fucntion has been added to the code to display current IR readings for both sensors to allow for quick calibration in that aspect.

Line following test proceedures and courses can be found in the project documentation pdf included in the main directory of this repo.

Now, if you're looking to replicate this specific project instead of the many simple line-following car tutorials on youtube to avoid use of motor encoders, I've included a full hardware list with links (to the best of my ability). Thingyverse and Original model files will be included soon, as i am still working out a few details and the documentation is due before the full demo. All Final STL files will be uploaded the day of or after the demo. 

>Hardware list:
  Source: Amazon
  -IR Sensor modules: 
  -DC Motors:
  -Arduino Rev3:
  -I/O Sheild:
  -4AA battery tray:
  -9V battery connector lead: 

  Source: Thingyverse, see authors at the links below for credit
  -Chassis (2WD):
  -Motor mounts:
  -IR sensor mounts:
  -Front end ball-caster bracket: Original creation, file will be added the day of the demo
  
  Other hardware/supplies:
  -M3x6 screws to mount Arduino/sheild/AA battery tray to chassis : X4
  -M3x10 screws to secure IR sensors to mounting bracket: X2
  -M3 nuts to help secure screws used for Arduino/sheild/AA battery tray: X4
  -prototyping jumper wires, I used the breadboard kit: [here](https://www.amazon.com/REXQualis-Electronics-tie-Points-Breadboard-Potentiometer/dp/B073ZC68QG/?_encoding=UTF8&pd_rd_w=G6JPY&content-id=amzn1.sym.25176ef5-509a-4446-bbde-9770a3f18b65%3Aamzn1.symc.abfa8731-fff2-4177-9d31-bf48857c2263&pf_rd_p=25176ef5-509a-4446-bbde-9770a3f18b65&pf_rd_r=JCBE5JS2649CFVPX5W84&pd_rd_wg=CFJf9&pd_rd_r=e47e82da-9283-4612-bf92-5b61a42f9e04&ref_=pd_hp_d_btf_ci_mcx_mr_ca_id_hp_d)
  -3M double-stick tape or equivalent for mounting IR sensor bracket to chassis and ball-caster bearing to the corresponding bracket 
