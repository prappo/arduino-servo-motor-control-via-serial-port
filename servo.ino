#include <Servo.h> 

Servo myservo;
int val=90;
int data;
void setup() 
{ 
  Serial.begin(9600);
  
  myservo.attach(9);
  myservo.write(90);
  
   // set servo to mid-point
} 

void loop() {
  if(Serial.available())
  {
    data=Serial.read();
    if(data=='a')
    {
    val+=10;
    myservo.write(val);
    
    
    
    }
    else if(data=='d')
    {
      val-=10;
      myservo.write(val);
      
      
      
    }
    }
    
} 
