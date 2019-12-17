int e=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(e,OUTPUT);

}
char a[]="hello!";
int i=0;
void loop() {
  // put your main code here, to run repeatedly:
  if(a[i]=='a'){
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    i=i+1;
  }
  else if(a[i]=='h'){
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    i=i+1;
  }
  else if(a[i]=='e'){
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    i=i+1;
  }
  else if(a[i]=='l'){
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    i=i+1;
  }
  else if(a[i]=='o'){
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    i=i+1;
  }
  else if(a[i]=='!'){
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    digitalWrite(e,HIGH);
    delay(100);
    digitalWrite(e,LOW);
    delay(100);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    digitalWrite(e,HIGH);
    delay(1000);
    digitalWrite(e,LOW);
    delay(1000);
    i=i+1;
  }
  else if(a[i]=='\0'){
    i=0;
  }
}
