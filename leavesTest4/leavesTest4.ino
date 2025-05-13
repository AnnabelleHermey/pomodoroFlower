
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

int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0; 
int pos = 0;   // variable to store the servo position

void setup() {
  for (int i = 0; i < 4; i++) {
    servos[i]->attach(servoPins[i]);
  }
}

void loop() {
  for (pos1 = 160; pos1 >= 60; pos1 -= 1) { // goes from 180 degrees to 0 degrees
    servos[0]->write(pos1);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }

  for (pos2 = 160; pos2 >= 60; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    servos[1]->write(pos2);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }

  for (pos3 = 160; pos3 >= 60; pos3 -= 1) { // goes from 180 degrees to 0 degrees
    servos[2]->write(pos3);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }

  for (pos4= 160; pos4 >= 60; pos4 -= 1) { // goes from 180 degrees to 0 degrees
    servos[3]->write(pos4);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }

  delay(1000);

  for (pos =60; pos <= 160; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servos[0]->write(pos);
    servos[1]->write(pos);
    servos[2]->write(pos);
    servos[3]->write(pos);             // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
  }
  delay(1000);
}
