#define sw1 7
#define sw2 6
#define led1 5
#define led2 4
int but1,but2 = 0;

void setup()
{
  pinMode(sw1, 0);
  pinMode(sw2, 0);
  pinMode(led1, 1);
  pinMode(led2, 1);
}

void loop()
{
  but1 = digitalRead(sw1),but2 = digitalRead(sw2);
  if (but1 == 0 and but2 == 0 ) {
    blink_led();
  }
  else if (but1 == 0 and but2 == 0) {
    digitalWrite(led1, 0);
  }
  if(but1 == 0){
    digitalWrite(led1, 1);
  }else{
    digitalWrite(led1, 0);
  }
  if(but2 == 0){
    digitalWrite(led2, 1);
  }else{
    digitalWrite(led2, 0);
  }
}
void blink_led() {
  digitalWrite(led1, 1),digitalWrite(led2, 1);
  delay(100);
  digitalWrite(led1, 0),digitalWrite(led2, 0);
  delay(100);
}
