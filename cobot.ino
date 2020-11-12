#include<Servo.h>
Servo s1; // Initialise the servo motor 1
Servo s2; // Initialise the servo motor 2
Servo s3; // Initialise the servo motor 3
void setup()
{
  s1.attach(11);
  s2.attach(10);
  s3.attach(6);
  
 }
void loop()
{ for(;;)
 {
  delay(2000);
  s1.write(180); // Servo 1 i.e Base of cobot going towards table 1
  delay(2000);   // delay of 2 second
  s2.write(120); // Servo 2 i.e Arm of cobot moving downwards 
  delay(2000);   // delay of 2 second
  s3.write(40);  // Servo 3 i.e Gripper is opening to grab the object
  delay(3000);    // delay of 3 second
  s3.write(90);   // Servo 3 i.e Gripper is closing to grab the object
  delay(1000);    // delay of 1 second
  s2.write(90);   // Servo 2 i.e Arm of cobot moving upwards to its initial position
  delay(3000);    // delay of 3 second
  s1.write(20);   // Servo 1 i.e Base of cobot going towards table 2
  delay(2000);    // delay of 2 second
  s3.write(40);   // Servo 3 i.e Gripper is opening to place the object
  delay(1000);    // delay of 1 second
  s3.write(90);   // Servo 3 i.e Gripper is close.
  delay(2000);    // delay of 2 second
 
}
  
}
