int red=11;
int green=10;
int blue=9;
int inPin =A0;
int x;
  
void setup() {
   pinMode(red ,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);
    pinMode(inPin , INPUT);
    Serial.begin(9600);
}

void loop() {
  Serial.println(x);
  x=analogRead(inPin);
  
  if(x<=142){
    analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,0);
  }
   else if(x > 142 && x < 284 ){
    analogWrite(red,255);
    analogWrite(green,102);
    analogWrite(blue,0);
  }
   else if (x > 284 && x < 426){
    analogWrite(red,255); 
    analogWrite(green,255);
    analogWrite(blue,0);
  }
   else if (x > 426 && x < 568){
    analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,0);
  }
   else if (x > 568 && x < 710){
    analogWrite(red,0);
    analogWrite(green,0);
    analogWrite(blue,255);
  }
   else if (x > 710 && x < 852){
    analogWrite(red,75);
    analogWrite(green,0);
    analogWrite(blue,130);
  }
  else{
    analogWrite(red,238);
    analogWrite(green,51);
    analogWrite(blue,204);
  }
}
    
