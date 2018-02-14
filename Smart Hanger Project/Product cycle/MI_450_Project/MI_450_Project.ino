// First we'll set up constants for the pin numbers.
// This will make it easier to follow the code below.

const int button1Pin = 2;  // pushbutton 2 pin
const int ledPin =  13;    // LED pin


void setup()
{
  // Set up the pushbutton pins to be an input:
  pinMode(button1Pin, INPUT);

  // Set up the LED pin to be an output:
  pinMode(ledPin, OUTPUT);      
}


void loop()
{
  int button1State;  // variables to hold the pushbutton states

  button1State = digitalRead(button1Pin);

  // Remember that if the button is being pressed, it will be
  // connected to GND. If the button is not being pressed,
  // the pullup resistor will connect it to 5 Volts.

  // So the state will be LOW when it is being pressed,
  // and HIGH when it is not being pressed.
  
  
  if (button1State == LOW)
  {
    digitalWrite(ledPin, HIGH);  // turn the LED on
  }
  else
  {
    digitalWrite(ledPin, LOW);  // turn the LED off
  }
}
