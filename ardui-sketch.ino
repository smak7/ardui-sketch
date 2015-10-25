#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2;

int potpin0 = 0;  // address analog pin to read data from the potentiometer
int potpin1 = 1; // potentiometer address
//int heartbeat = 2; // replace potpin2 with heartbeat if you want to add a heart beat sensor 
int val0;  // variable to read the value from the analog pin (looking for 1-5Volts)
int val1; 


void setup() {
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(12);
  Serial.begin(9600);
}

void loop() {
  val0 = analogRead(potpin0); // reads the value of the voltage of the potentiometer (value between 0 and 1023)
  val0 = map(val0, 0, 1023, 0, 90); // 0-1023 is what we're reading and we scale it to use it with the servo (value between 0 and 180)
  
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 0, 90);
  
  myservo.write(val0); // sets the servo position according to the scaled value
  myservo2.write(val1);
  
  
  //debug
  Serial.println(val0);
  Serial.println(val1);
  
  delay(15);   // waits for the servo to get there
}

