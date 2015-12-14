char ch = 'R'; //送受信の時に使う文字列。
int i = 1;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  while(Serial.available()){
    ch = Serial.read();
    if(ch == 'y'){
    digitalWrite(13,HIGH);
  }
    if(ch == 'n'){
    digitalWrite(13,LOW);
    }   
  }
}
