/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int delayPeriod = 1000;
String message = "Hello World, the delay currently is ";

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {
  
  Serial.println(message + delayPeriod);
  Serial.println();

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayPeriod);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(delayPeriod);               // wait for a second
  delayPeriod = delayPeriod + 200;
}
