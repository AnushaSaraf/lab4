SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

const int buttonPin = D2; // Pin connected to the button
const int ledPin = D3;    // Pin connected to the LED

/*
 * Project lab4
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup()
{

  pinMode(buttonPin, INPUT_PULLUP); // Set buttonPin as input with a pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set ledPin as output
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  int buttonState = digitalRead(buttonPin); // Read the state of the button

  if (buttonState == HIGH)
  {
    digitalWrite(ledPin, HIGH); // Turn on the LED
  }
  else
  {
    digitalWrite(ledPin, LOW); // Turn off the LED
  }
}