// C++ code
//
int outerled=5;
int redled=10;
int innerled=8;
int pushbutton=2;
void setup()
{
  pinMode(outerled, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(innerled, OUTPUT);
  pinMode(pushbutton, INPUT_PULLUP);
}

void loop()
{
  int switchstate=digitalRead(pushbutton);
  if(switchstate==HIGH)
  {
    digitalWrite(outerled, LOW);
    digitalWrite(redled, LOW);
    digitalWrite(innerled, LOW);
  }
  else if(switchstate==LOW)
  {
    digitalWrite(innerled, HIGH);
    delay(2000);
    digitalWrite(innerled, LOW);
    digitalWrite(redled, HIGH);
    delay(2000);
    digitalWrite(redled, LOW);
    digitalWrite(outerled, HIGH);
    delay(2000);
    digitalWrite(outerled, LOW);
    digitalWrite(redled, HIGH);
    delay(2000);
    digitalWrite(redled, LOW);
    digitalWrite(innerled, HIGH);
    delay(2000);
    digitalWrite(innerled, LOW);
    delay(1000);
    digitalWrite(outerled, HIGH);
    digitalWrite(redled, HIGH);
    digitalWrite(innerled, HIGH);
    delay(3000);
    digitalWrite(outerled, LOW);
    digitalWrite(redled, LOW);
    digitalWrite(innerled, LOW);
    delay(1000);
    
  }
  
}