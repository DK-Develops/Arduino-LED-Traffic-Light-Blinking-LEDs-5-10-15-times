void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT); //red
  pinMode(4, OUTPUT); //green
  pinMode(10, OUTPUT); //yellow
  //green yellow red green
}

void loop() {
  // put your main code here, to run repeatedly:
  //green
  digitalWrite(4, HIGH);
   digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(5000);
 
  //yellow
  digitalWrite(4,LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(2500);
  //red
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);

  delay(5000);


 for(int r = 0; r<5; r++)
  {
digitalWrite(8,LOW);
delay(300);
digitalWrite(8,HIGH);
delay(300);
}
delay(1000);

for(int g = 0; g<10; g++)
 {
digitalWrite(4,HIGH);
 delay(300);
digitalWrite(4,LOW);
 delay(300);
}
 delay(1000);


 for(int y = 0; y<15; y++)
 {
 digitalWrite(10,LOW);
 delay(300);
digitalWrite(10,HIGH);
 delay(300);
}
 delay(3000);

}

