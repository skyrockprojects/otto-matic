#include <Servo.h>

//#include <Oscillator.h>


#define N_SERVOS 4

#define PIN_RR 5
#define PIN_RL 4
#define PIN_YR 3
#define PIN_YL 2

Servo servo[N_SERVOS];


void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);

  servo[0].attach(PIN_RR);
  servo[1].attach(PIN_RL);
  servo[2].attach(PIN_YR);
  servo[3].attach(PIN_YL);

  servo[0].write(0);
  servo[1].write(180);
  delay(5000);
  servo[0].write(90);
  servo[1].write(90);

}

void loop() {
  // put your main code here, to run repeatedly:

  // the function of this code is to make the foot raise by 30 degrees 
  // and to conitnue to increase the anges with each loop of the code.  
  // we ue i to refer to the servo number.  This is to randomly select the
  // servo and then the other info e.g. the numbers etc are used as parameters
  //for that random selection.

  for(int i=0;i<2;i++) servo[i].write(i*30+30);
  delay(1000);
  for(int i=0;i<2;i++) servo[i].write(90);
  delay(1000);
  

}
