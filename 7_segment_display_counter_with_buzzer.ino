#7 segment display counter with buzzer

int i;
const int b = 10;

void setup()
{
  pinMode(b, OUTPUT);
  digitalWrite(b, LOW);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}

void loop()
{
  Serial.println("enter time in seconds");
  delay(500);
  i = Serial.parseInt();
  while (i != 0)
  {
    for (i; i >= 0; i--)
    {
      Serial.println(i);
      delay(1000);
      if (i < 10)
      {
        if (i == 1)
        {
          digitalWrite(2, 1);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 1);
          digitalWrite(6, 1);
          digitalWrite(7, 1);
          digitalWrite(8, 1);
          digitalWrite(b, HIGH);
          delay(200);
        }
        else if (i == 2)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 1);
          digitalWrite(5, 0);
          digitalWrite(6, 0);
          digitalWrite(7, 1);
          digitalWrite(8, 0);
          digitalWrite(b, HIGH);
          delay(200);
        }
        else if (i == 3)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 1);
          digitalWrite(7, 1);
          digitalWrite(8, 0);
          digitalWrite(b, HIGH);
          delay(200);
        }
        else if (i == 4)
        {
          digitalWrite(2, 1);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 1);
          digitalWrite(6, 1);
          digitalWrite(7, 0);
          digitalWrite(8, 0);
          digitalWrite(b, HIGH);
          delay(200);
        }
        else if (i == 5)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 1);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 1);
          digitalWrite(7, 0);
          digitalWrite(8, 0);
          digitalWrite(b, HIGH);
          delay(200);
        }
        else if (i == 6)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 1);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 0);
          digitalWrite(7, 0);
          digitalWrite(8, 0);
        }
        else if (i == 7)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 1);
          digitalWrite(6, 1);
          digitalWrite(7, 1);
          digitalWrite(8, 1);
        }
        else if (i == 8)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 0);
          digitalWrite(7, 0);
          digitalWrite(8, 0);
        }
        else if (i == 9)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 1);
          digitalWrite(7, 0);
          digitalWrite(8, 0);
        }
        else if (i == 0)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          digitalWrite(6, 0);
          digitalWrite(7, 0);
          digitalWrite(8, 1);
          Serial.println("END");
          digitalWrite(b, LOW);
          delay(2000);
          digitalWrite(2, 1);
          digitalWrite(3, 1);
          digitalWrite(4, 1);
          digitalWrite(5, 1);
          digitalWrite(6, 1);
          digitalWrite(7, 1);
          digitalWrite(8, 1);
        }
      }
    }
  }
}
