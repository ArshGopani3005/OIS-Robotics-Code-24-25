//Grade 5 Two LEDs with resitor. 
// Blink Activity breadboard page no 79 and 80 on E-book
void setup() 
{
  // Set pin 10 as an output pin. This means it will send signals to an LED or other device.
  pinMode(10, OUTPUT);
}

void loop() 
{
  // Turn the LED on by setting pin 10 to HIGH (electricity flows to the LED).
  digitalWrite(10, HIGH);
  
  // Wait for 1 second (1000 milliseconds).
  delay(1000);
  
  // Turn the LED off by setting pin 10 to LOW (no electricity flows to the LED).
  digitalWrite(10, LOW);
  
  // Wait for another second.
  delay(1000);
}
