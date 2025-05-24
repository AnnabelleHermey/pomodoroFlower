
#include <Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Array of servo pointers
Servo* servos[4] = { &servo1, &servo2, &servo3, &servo4 };

// Servo pin numbers
const int servoPins[4] = {3, 5, 6, 9};

int pos1a = 30; //40
int pos1b = 65; //65
int pos1x = 0;
int pos2a = 160; //155
int pos2b = 120; //130
int pos2x = 0;
int pos3a = 130; //122
int pos3b = 95; //97
int pos4a = 150; //145
int pos4b = 120; //120
int pos4x = 0;  // variable to store the servo position
int pos3x = 0;

void setup() {
  servos[3] -> attach(servoPins[3]);
  servos[3] ->write(145);
  servos[3] -> detach();
  servos[2] -> attach(servoPins[2]);
  servos[2] ->write(122);
  servos[2] -> detach();
  servos[1] -> attach(servoPins[1]);
  servos[1] ->write(155);
  servos[1] -> detach();
  servos[0] -> attach(servoPins[0]);
  servos[0] ->write(40);
  servos[0] -> detach();
  
}

void loop() {
  // SERVO 4
servos[3] -> attach(servoPins[3]);
for (pos4x = pos4a; pos4x >= pos4b; pos4x -= 1) { // goes from 180 degrees to 0 degrees
   servos[3]->write(pos4x);              // tell servo to go to position in variable 'pos'
   delay(30);                       // waits 15ms for the servo to reach the position
 }
 servos[3] -> detach();
 delay(1000);


 // SERVO 3
servos[2] -> attach(servoPins[2]);
 for (pos3x = pos3a; pos3x >= pos3b; pos3x -= 1) { // goes from 180 degrees to 0 degrees
  servos[2]->write(pos3x);              // tell servo to go to position in variable 'pos'
  delay(30);                       // waits 15ms for the servo to reach the position
}
servos[2] -> detach();
delay(1000);



 // SERVO 2
servos[1] -> attach(servoPins[1]);
for (pos2x = pos2a; pos2x >= pos2b; pos2x -= 1) { // goes from 180 degrees to 0 degrees
  servos[1]->write(pos2x);              // tell servo to go to position in variable 'pos'
  delay(30);                       // waits 15ms for the servo to reach the position
}
servos[1] -> detach();
delay(1000);



 // SERVO 1
servos[0] -> attach(servoPins[0]);
for (pos1x = pos1a; pos1x <= pos1b; pos1x += 1) { // goes from 180 degrees to 0 degrees
 servos[0]->write(pos1x);              // tell servo to go to position in variable 'pos'
 delay(30);                       // waits 15ms for the servo to reach the position
 }
  servos[0] -> detach();
delay(1000);

 // CLOSE
servos[3] -> attach(servoPins[3]);
servos[2] -> attach(servoPins[2]);
servos[1] -> attach(servoPins[1]);
servos[0] -> attach(servoPins[0]);
  for (pos4x = pos4b; pos4x <= pos4a; pos4x += 1) { // goes from 0 degrees to 180 degrees
   servos[3]->write(pos4x);              // tell servo to go to position in variable 'pos'
   delay(30);                           // waits 15ms for the servo to reach the position
 }
 for (pos3x = pos3b; pos3x <= pos3a; pos3x += 1) { // goes from 0 degrees to 180 degrees
  servos[2]->write(pos3x);              // tell servo to go to position in variable 'pos'
  delay(30);                           // waits 15ms for the servo to reach the position
}
for (pos2x = pos2b; pos2x <= pos2a; pos2x += 1) { // goes from 0 degrees to 180 degrees
  servos[1]->write(pos2x);              // tell servo to go to position in variable 'pos'
  delay(30);                           // waits 15ms for the servo to reach the position
}
 for (pos1x = pos1b; pos1x >= pos1a; pos1x -= 1) { // goes from 0 degrees to 180 degrees
   servos[0]->write(pos1x);              // tell servo to go to position in variable 'pos'
   delay(30);                           // waits 15ms for the servo to reach the position
 }
servos[3] -> detach();
servos[2] -> detach();
servos[1] -> detach();
  servos[0] -> detach();
 delay(1000);


 delay(375000);

  // SERVO 4
servos[3] -> attach(servoPins[3]);
for (pos4x = pos4a; pos4x >= pos4b; pos4x -= 1) { // goes from 180 degrees to 0 degrees
   servos[3]->write(pos4x);              // tell servo to go to position in variable 'pos'
   delay(30);                       // waits 15ms for the servo to reach the position
 }
  servos[3] -> detach();
 delay(375000);


 // SERVO 3
servos[2] -> attach(servoPins[2]);
 for (pos3x = pos3a; pos3x >= pos3b; pos3x -= 1) { // goes from 180 degrees to 0 degrees
  servos[2]->write(pos3x);              // tell servo to go to position in variable 'pos'
  delay(30);                       // waits 15ms for the servo to reach the position
}
servos[2] -> detach();
delay(375000);


 // SERVO 2
servos[1] -> attach(servoPins[1]);
for (pos2x = pos2a; pos2x >= pos2b; pos2x -= 1) { // goes from 180 degrees to 0 degrees
  servos[1]->write(pos2x);              // tell servo to go to position in variable 'pos'
  delay(30);                       // waits 15ms for the servo to reach the position
}
servos[1] -> detach();
delay(375000);


 // SERVO 1
servos[0] -> attach(servoPins[0]);
for (pos1x = pos1a; pos1x <= pos1b; pos1x += 1) { // goes from 180 degrees to 0 degrees
 servos[0]->write(pos1x);              // tell servo to go to position in variable 'pos'
 delay(30);                       // waits 15ms for the servo to reach the position
 }
   servos[0] -> detach();
delay(300000);

 // CLOSE
servos[3] -> attach(servoPins[3]);
servos[2] -> attach(servoPins[2]);
servos[1] -> attach(servoPins[1]);
servos[0] -> attach(servoPins[0]);
  for (pos4x = pos4b; pos4x <= pos4a; pos4x += 1) { // goes from 0 degrees to 180 degrees
   servos[3]->write(pos4x);              // tell servo to go to position in variable 'pos'
   delay(30);                           // waits 15ms for the servo to reach the position
 }
 for (pos3x = pos3b; pos3x <= pos3a; pos3x += 1) { // goes from 0 degrees to 180 degrees
  servos[2]->write(pos3x);              // tell servo to go to position in variable 'pos'
  delay(30);                           // waits 15ms for the servo to reach the position
}
for (pos2x = pos2b; pos2x <= pos2a; pos2x += 1) { // goes from 0 degrees to 180 degrees
  servos[1]->write(pos2x);              // tell servo to go to position in variable 'pos'
  delay(30);                           // waits 15ms for the servo to reach the position
}
 for (pos1x = pos1b; pos1x >= pos1a; pos1x -= 1) { // goes from 0 degrees to 180 degrees
   servos[0]->write(pos1x);              // tell servo to go to position in variable 'pos'
   delay(30);                           // waits 15ms for the servo to reach the position
 }
servos[3] -> detach();
servos[2] -> detach();
servos[1] -> detach();
  servos[0] -> detach();
 delay(1000);

  
}