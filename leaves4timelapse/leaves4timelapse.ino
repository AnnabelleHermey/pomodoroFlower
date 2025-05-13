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

int currentServo = 0;  // Track which servo to move next
unsigned long lastMoveTime = 0;
const unsigned long interval = 60000UL;  // 1 minute in milliseconds

enum State { OPENING, WAITING_TO_CLOSE, CLOSING };
State state = OPENING;

void setup() {
  for (int i = 0; i < 4; i++) {
    servos[i]->attach(servoPins[i]);
    servos[i]->write(160);  // Initial position
  }
  lastMoveTime = millis();
}

void loop() {
  unsigned long currentTime = millis();

  switch (state) {
    case OPENING:
      if (currentTime - lastMoveTime >= interval && currentServo < 4) {
        servos[currentServo]->write(60);
        lastMoveTime = currentTime;
        currentServo++;
        if (currentServo == 4) {
          state = WAITING_TO_CLOSE;
          lastMoveTime = currentTime;  // Start wait timer
        }
      }
      break;

    case WAITING_TO_CLOSE:
      if (currentTime - lastMoveTime >= interval) {
        for (int i = 0; i < 4; i++) {
          servos[i]->write(160);
        }
        state = CLOSING;
        lastMoveTime = currentTime;
      }
      break;

    case CLOSING:
      // Reset for next cycle
      if (currentTime - lastMoveTime >= interval) {
        currentServo = 0;
        state = OPENING;
        lastMoveTime = currentTime;
      }
      break;
  }
}
