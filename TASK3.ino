
int green1=5;
int orange=6;
int blue=8;
int red1=7;

int red2=9;
int green2=10;

int button1=2;
int button2=3;

void setup()
{
  for(int i=5;i<=10;i++){
    pinMode(i,OUTPUT);
    
    
  }
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);

}

void loop()
{
  

  if(digitalRead(button1)==HIGH){
    
digitalWrite(red1 ,1);
    
    

analogWrite(green1,128);
delay(1000);

    
    
    
   
    
   
  }
else{
  digitalWrite(red1,0);
digitalWrite(green1,0);}


 if(digitalRead(button2)==HIGH){
    
digitalWrite(red2,1);
   


analogWrite(green2,128);
delay(1000);

  }
else{
  digitalWrite(red2,0);
digitalWrite(green2,0);}
}
