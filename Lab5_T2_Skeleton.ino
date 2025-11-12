/*Change all the ? in the code and add code in ??? to Control 2 DC Motors.*/

#define IN1   33  // Replace the ? with the GPIO pin you selected to connect IN1
#define IN2   32   // Replace the ? with the GPIO pin you selected to connect IN2
#define AL  26 // Replace the ? with the GPIO pin you selected to connect encoder A of Motor L
#define BL  27 // Replace the ? with the GPIO pin you selected to connect encoder B of Motor L

#define IN3   14  // Replace the ? with the GPIO pin you selected to connect IN3
#define IN4   12   // Replace the ? with the GPIO pin you selected to connect IN4
#define AR  25 // Replace the ? with the GPIO pin you selected to connect encoder A of Motor R
#define BR 13 // Replace the ? with the GPIO pin you selected to connect encoder B of Motor R


int AL_data=0;
int BL_data=0;

int AR_data=0;
int BR_data=0;

String command;

void setup() {
  Serial.begin(115200);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(AL, INPUT);
  pinMode(BL, INPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(AR, INPUT);
  pinMode(BR, INPUT);
}


void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "F") {  // Move forward
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }
    else if (command == "B") {  // Move backward
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    else if (command == "R") {  // Turn right
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    else if (command == "L") {  // Turn left
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);

      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }
    else if (command == "S") {  // Stop
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
  }

  // Read encoder signals of Motor L and Motor R
  AL_data = digitalRead(AL);
  BL_data = digitalRead(BL);

  AR_data = digitalRead(AR);
  BR_data = digitalRead(BR);

  // Print encoder values for Serial Plotter visualization as CSV
  Serial.print(AL_data);
  Serial.print(",");
  Serial.print(BL_data);
  Serial.print(",");
  Serial.print(AR_data);
  Serial.print(",");
  Serial.println(BR_data);

  delay(10);
}