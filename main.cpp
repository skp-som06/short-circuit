int G_LEDpin = 13;  // Pin connected to Green LED
int Y_LEDpin = 12;  // Pin connected to Yellow LED
int R_LEDpin = 9;   // Pin connected to Red LED
int buttonpin = 3;  // Pin connected to the button
int buttonState = LOW;  // Variable to store button state

void setup()
{
  pinMode(G_LEDpin, OUTPUT);  // Set Green LED pin as output
  pinMode(R_LEDpin, OUTPUT);  // Set Red LED pin as output
  pinMode(Y_LEDpin, OUTPUT);  // Set Yellow LED pin as output
  pinMode(buttonpin, INPUT);  // Set button pin as input
}

void loop()
{
  buttonState = digitalRead(buttonpin);  // Read the state of the button

  if (buttonState == LOW)  // If button is not pressed (LOW state)
  {
    digitalWrite(G_LEDpin, HIGH);  // Turn Green LED ON
    digitalWrite(Y_LEDpin, LOW);   // Turn Yellow LED OFF
    digitalWrite(R_LEDpin, LOW);   // Turn Red LED OFF
    delay(2000);  // Wait for 2 seconds

    if (digitalRead(buttonpin) == LOW)  // If button is still not pressed
    {
      digitalWrite(Y_LEDpin, HIGH);  // Turn Yellow LED ON
      digitalWrite(R_LEDpin, LOW);   // Turn Red LED OFF
      digitalWrite(G_LEDpin, LOW);   // Turn Green LED OFF
      delay(2000);  // Wait for 2 seconds
    }

    digitalWrite(R_LEDpin, HIGH);  // Turn Red LED ON
    digitalWrite(G_LEDpin, LOW);   // Turn Green LED OFF
    digitalWrite(Y_LEDpin, LOW);   // Turn Yellow LED OFF
    delay(2000);  // Wait for 2 seconds
  }
  else  // If button is pressed (HIGH state)
  {
    digitalWrite(R_LEDpin, HIGH);  // Turn Red LED ON
    digitalWrite(G_LEDpin, LOW);   // Turn Green LED OFF
    digitalWrite(Y_LEDpin, LOW);   // Turn Yellow LED OFF
    delay(2000);  // Wait for 2 seconds
  }
}
