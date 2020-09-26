/*
  Button
  Turns on and off a light emitting diode(LED)
  connected to digital  pin 13, when pressing a
  pushbutton attached to pin 2.

   The circuit:
  * LED attached from pin 13 to ground
  * pushbutton attached to pin 2 from +5V
  * 10K resistor attached to pin 2 from ground
  * Note: on most Arduinos there is already an LED
  on the board  attached to pin 13.

  created 2005  by DojoDave <http://www.0j0.org>

  modified 30 Aug 2011  by Tom Igoe

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Button
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal(12, 11, 10, 9, 8, 7);

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int count = -1;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  lcd.begin(16, 2);
}

void loop()
{
  
  // read the state of the pushbutton value
  buttonState1 = digitalRead(2);
  buttonState2 = digitalRead(3);
  buttonState3 = digitalRead(4);
  buttonState4 = digitalRead(5);
  buttonState5 = digitalRead(6);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState1 == HIGH) {
    count++;
    lcd.setCursor(count, 1);
  	lcd.print("H");
    digitalWrite(13, HIGH);
    delay(200);
  }
  else if (buttonState2 == HIGH) {
    count++;
    lcd.setCursor(count, 1);
  	lcd.print("E");
    // turn LED on
    digitalWrite(13, HIGH);
    delay(200);
  } 
  else if (buttonState3 == HIGH) {
    count++;
    lcd.setCursor(count, 1);
  	lcd.print("L");
    // turn LED on
    digitalWrite(13, HIGH);
    delay(200);
  } 
  else if (buttonState4 == HIGH) {
    count++;
    lcd.setCursor(count, 1);
  	lcd.print("O");
    // turn LED on
    digitalWrite(13, HIGH);
    delay(200);
  } 
  else if (buttonState5 == HIGH) {
    count++;
    lcd.setCursor(count, 1);
  	lcd.print("!");
    // turn LED on
    digitalWrite(13, HIGH);
    delay(200);
  
  } else {
    // turn LED off
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
