/*Change all the ? in the code and add code in ??? to Control the speed of rotation.*/

#define IN1   ?  // Replace the ? with the GPIO pin you selected to connect IN1
#define IN2   ?   // Replace the ? with the GPIO pin you selected to connect IN2
#define A  ? // Replace the ? with the GPIO pin you selected to connect encoder A
#define B  ? // Replace the ? with the GPIO pin you selected to connect encoder B
#define PWM ?  // Replace the ? with the GPIO pin you selected to output PWM

int A_data=0;
int B_data=0;

String command;

void setup() {
  /*setup baud and pin mode */
  ??? 

  /*Set a rotation direction*/
  ???
}

void loop() {
   
    if (Serial.available() > 0) {
        command = Serial.readStringUntil('\n'); // Read the incoming command
        command.trim(); // Remove any leading or trailing whitespace
        if (command == "0") {
        // output PWM signals with 0% duty cycle
        analogWrite(PWM,?);  
        } 
        else if (command == "25") {
        // output PWM signals with 25% duty cycle
        analogWrite(PWM,?);   
        }
        else if (command == "50") {
        // output PWM signals with 50% duty cycle
        analogWrite(PWM,?);   
        }
        else if (command == "75") {
        // output PWM signals with 75% duty cycle
        analogWrite(PWM,?);   
        }
        else if (command == "100") {
        // output PWM signals with 100% duty cycle
        analogWrite(PWM,?);   
        }
        }
    // Read values of A and B
       ???
    // Plot A B in Serial Plotter
       ??? 
    
}
