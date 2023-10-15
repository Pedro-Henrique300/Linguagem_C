void setup()

{

  pinMode(8, INPUT);

  pinMode(11, OUTPUT);

  pinMode(9, INPUT);

  pinMode(10, INPUT);

}

void loop()

{

  if (digitalRead(8) == HIGH) {

    tone(11, 440, 200); // play tone 57 (A4 = 440 Hz)

  }

  if (digitalRead(9) == HIGH) {

    tone(11, 494, 200); // play tone 59 (B4 = 494 Hz)

  }

  if (digitalRead(10) == HIGH) {

    tone(11, 554, 200); // play tone 61 (C#5 = 554 Hz)

  }

  delay(10); // Delay a little bit to improve simulation performance

}