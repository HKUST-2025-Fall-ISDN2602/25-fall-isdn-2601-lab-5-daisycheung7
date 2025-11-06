/*Change all the ? in the code and add code in ??? to Control 2 DC Motors.*/

#define IN1   ?  // Replace the ? with the GPIO pin you selected to connect IN1
#define IN2   ?   // Replace the ? with the GPIO pin you selected to connect IN2
#define AL  ? // Replace the ? with the GPIO pin you selected to connect encoder A of Motor L
#define BL  ? // Replace the ? with the GPIO pin you selected to connect encoder B of Motor L

#define IN3   ?  // Replace the ? with the GPIO pin you selected to connect IN3
#define IN4   ?   // Replace the ? with the GPIO pin you selected to connect IN4
#define AR  ? // Replace the ? with the GPIO pin you selected to connect encoder A of Motor R
#define BR ? // Replace the ? with the GPIO pin you selected to connect encoder B of Motor R


int AL_data=0;
int BL_data=0;

int AR_data=0;
int BR_data=0;

String command;

void setup() {
  /*setup baud and pin mode */
   ??? 


}

void loop() {
   
    if (Serial.available() > 0) {
        command = Serial.readStringUntil('\n'); // Read the incoming command
        command.trim(); // Remove any leading or trailing whitespace
    if (command == "F") 
    { 
      // Move forward 
       ??? 
      } 
    else if (command == "B") 
    { // Move Backward 
      ??? 
      } 
    else if (command == "R") 
    { // Turn right 
   ???
    } 
    else if (command == "L") { 
    // Turn left 
    ???
   } 
  else if (command == "S") { 
    // Stop 
    ???
     } 
        }
    // Read values of A and B of both Motor L and R
     ???
    // Plot A and B of both Motor L and R in Serial Plotter
    ???
    
}
