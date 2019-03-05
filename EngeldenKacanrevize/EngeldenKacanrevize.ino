//pinleri gir
#define sagmotor1  3
#define sagmotor2  4
#define solmotor1  6
#define solmotor2  7
#define sensor 8

void setup() {
  Serial.begin(9600);
  pinMode(sagmotor1 , OUTPUT);
  pinMode(sagmotor2 , OUTPUT);
  pinMode(solmotor1 , OUTPUT);
  pinMode(solmotor2 , OUTPUT);
  pinMode(sensor , INPUT);

}

void loop()
{

  while (digitalRead(sensor) == 0)
  {
    digitalWrite(sagmotor1 , LOW);
    digitalWrite(sagmotor2 , LOW);
    digitalWrite(solmotor1 , HIGH);
    digitalWrite(solmotor2 , LOW);
    delay(500);
  }
  
  digitalWrite(sagmotor1 , HIGH);
  digitalWrite(sagmotor2 , LOW);
  digitalWrite(solmotor1 , LOW);
  digitalWrite(solmotor2 , HIGH);

}
