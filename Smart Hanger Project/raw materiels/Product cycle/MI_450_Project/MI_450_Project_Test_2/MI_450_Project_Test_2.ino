int red = 10;
int yellow = 9;
int green = 8;
int button = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(red, HIGH);
}

void loop() {
  int timer = 0;
  while (digitalRead(button) == HIGH) {
    delay(15);
    while (digitalRead(button) == HIGH) {
      if (timer < 5) {
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        delay(1000);
        timer = timer+1;
      } else if (timer >= 5 && timer < 10) {
        digitalWrite(green, LOW);
        digitalWrite(yellow, HIGH);
        delay(1000);
        timer = timer+1;
      } else {
        digitalWrite(yellow, LOW);
        digitalWrite(red, HIGH);
      }
    }
  }
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
}

