#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9

#define kirmizi 10
#define sari 11
#define yesil 12
bool dur=true;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yesil, OUTPUT);
  digitalWrite(kirmizi,HIGH);
  digitalWrite(sari,LOW);
  digitalWrite(yesil,LOW);
  sondur();
 
}
void sondur()
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
}
void rakamYak(int rakam)
{
  sondur();
  switch (rakam){
    case 0:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      break;
    case 1:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      break;
    case 2:
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      break;
    case 3:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      break;
    case 4:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led7,LOW);
      break;
    case 5:
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      break;
    case 6:
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      break;
    case 7:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led6,LOW);
      break;
    case 8:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      break;
    case 9:
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      break;
    default:
      sondur();
  }
}
void loop()
{
  for (int i=9;i>=1;i--)
  {
    rakamYak(i);
    delay(1000);
  }
  sondur();
  if (dur)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,HIGH);
    delay(1500);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,HIGH);
    dur=false;
  }else
  {
    digitalWrite(yesil,LOW);
    digitalWrite(sari,HIGH);
    delay(1500);
    digitalWrite(sari,LOW);
    digitalWrite(kirmizi,HIGH);
    dur=true;
  }
  delay(200);
  //digitalWrite(led, HIGH);
  //delay(1000);
  //digitalWrite(led,LOW);
  //delay(1000);
}
