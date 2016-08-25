// cc - by Johannes Heberlein 2014
// v 1.01
// thingiverse.com/joo   wiki.fablab-nuernberg.de

// units: mm; microseconds; radians
// origin: bottom left of drawing surface

// time library see http://playground.arduino.cc/Code/time 

// delete or mark the next line as comment when done with calibration  
//#define CALIBRATION

// When in calibration mode, adjust the following factor until the servos move exactly 90 degrees
#define SERVOFAKTOR 650

// Zero-position of left and right servo
// When in calibration mode, adjust the NULL-values so that the servo arms are at all times parallel
// either to the X or Y axis
#define SERVOLEFTNULL 1950
#define SERVORIGHTNULL 1200

#define SERVOPINLIFT  6
#define SERVOPINLEFT  5
#define SERVOPINRIGHT 3

// lift positions of lifting servo
#define LIFT0 1710 // on drawing surface 1280
#define LIFT1 1125  // between numbers
#define LIFT2 725  // going towards sweeper

// speed of liftimg arm, higher is slower
#define LIFTSPEED 1500

// length of arms
#define L1 35
#define L2 55
#define L3 13.2
#define L4 45

#define LIGHTDETECTORPIN 4

// origin points of left and right servo 
#define O1X 22
#define O1Y -25
#define O2X 47
#define O2Y -25

double toremove=0;

//#include <Time.h> // see http://playground.arduino.cc/Code/time 
#include <Servo.h>

double move_speed = 5;
const int ledPin =  13; 
const int buttonPin = 2;
int servoLift = 1500;
int buttonState = 0;
int i = 0;
Servo servo1;  // 
Servo servo2;  // 
Servo servo3;  // 

volatile double lastX = 75;
volatile double lastY = 47.5;

int last_min = 0;

void lift(char lift) {
/* Decompiled function by JetBrain*/
/* ARM */
}

double return_angle(double a, double b, double c) {
/* Decompiled function by JetBrain*/
/* ARM */
}


void set_XY(double Tx, double Ty) 
{
/* Decompiled function by JetBrain*/
/* ARM */
}

void drawTo(double pX, double pY) {
/* Decompiled function by JetBrain*/
/* ARM */
}

void bogenUZS(float bx, float by, float radius, int start, int ende, float sqee) {
/* Decompiled function by JetBrain*/
/* ARM */
}

void bogenGZS(float bx, float by, float radius, int start, int ende, float sqee) {
/* Decompiled function by JetBrain*/
/* ARM */
}

void setup() 
{ 
  // Set current time only the first to values, hh,mm are needed
//  setTime(19,38,0,0,0,0); 
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  pinMode(LIGHTDETECTORPIN, OUTPUT);
  Serial.begin(9600);

  servo1.attach(SERVOPINLIFT);  //  lifting servo
  servo2.attach(SERVOPINLEFT);  //  left servo
  servo3.attach(SERVOPINRIGHT);  //  right servo
//  drawTo(75.2, 47);
  lift(1);  
  delay(1000);

} 

void loop() 
{ 
//  number(3, 3, 111, 1);
//  delay(10000);
//  if (buttonState == HIGH) {
  if (i == 0) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
//  }  
//  if (last_min != 7) {
//  i++;
    if (!servo1.attached()) servo1.attach(SERVOPINLIFT);
    if (!servo2.attached()) servo2.attach(SERVOPINLEFT);
    if (!servo3.attached()) servo3.attach(SERVOPINRIGHT);

      lift(1);
      delay(1000);
      /*
      int LightDetector = analogRead(LIGHTDETECTORPIN);

      for(int jo = 0; jo < 500; jo++){
        Serial.print(LightDetector);
        LightDetector = analogRead(A4);
        Serial.print("\n");
        delay(1000);
      }*/
      drawTo(-19, 35);
      Serial.print("-16");
      delay(1000);
      lift(0);
      drawTo(58, 42);
      delay(200);
      drawTo(-17, 35);
      delay(500);
      lift(1);
      drawTo(25, 25);
      //drawTo(10, 26);
      i = 1;

    
    servo1.detach();
    servo2.detach();
    servo3.detach();
}
#endif

} 
