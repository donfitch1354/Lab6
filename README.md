Lab6
====

Robot libraries for robot movement
Author: C1C Ethan Snyder
Documentation: Worked closely with C2C Payden Mcbee on concepts and code style. 

Purpose: allows 6 functions. 

1. turnLeft(); this function makes the robot turn left < 90 degrees
2. turnRight(); same as above but to the right
3. turnLeftWide(); turns left but for an angle > 90 degrees
4. turnRightWide(); same as above but to the right
5. moveForward(); moves robot forward
6. moveBackwards(); moves robot backwards


Each function has it's own timing based on a delay cycles command. Additionally, each function will finish running
and the robot will wait 1000000 cycles before beginning the next command in main
