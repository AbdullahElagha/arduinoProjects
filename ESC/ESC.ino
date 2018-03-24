#include <Servo.h>


/* HOW TO RUN MOTOR USING ESC
 *  
 *  start throttle = 0
 *  
 *  wait 2 seconds
 *  
 *  set throttle to 65 - min value to spin prop 
 *                       (safest)
 *                       
 *  set throttle to 95 - max value                    
 *  
 *  
 */

Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;

int throttlePin=0;


void setup() {

// for PWM pins use 3, 9, 10, and 11 
// they have freq=490Hz, which is what our ESCs operate at
// PWMs on 5&6 have frequency 980HZ, which is too fast
  esc1.attach(3);    
  esc2.attach(9);
  esc3.attach(10);
  esc4.attach(11);
  
  
  
  
  Serial.begin(9600);    // start serial at 9600 baud

}

void loop() {
 
  int throttle = analogRead(throttlePin);
  throttle = map(throttle, 0, 1023, 0, 179);

  
  esc1.write(throttle);
  esc2.write(throttle);
  esc3.write(throttle);
  esc4.write(throttle);
  
  Serial.println(throttle);
}












