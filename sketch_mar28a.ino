const int solsensor = 2;
const int sagonsensor = 3;
const int sagsensor = 4;
const int solonsensor = 5;
const int onsensor = 6;
int deger1;
int deger2;
int deger3;
int deger4;
int deger5;
void setup() 
{
Serial.begin(9600);
pinMode(solsensor,INPUT);
pinMode(solonsensor,INPUT);
pinMode(sagsensor,INPUT);
pinMode(sagonsensor,INPUT);
pinMode(onsensor,INPUT);

}
void loop()
{
  digitalRead(onsensor)=deger1;
   digitalRead(sagsensor)=deger2;
    digitalRead(solsensor)=deger3;
     digitalRead(sagonsensor)=deger4;
      digitalRead(solonsensor)=deger5
Serial.print(solsensor);
Serial.print(sagsensor);
Serial.print(solonsensor);
Serial.print(sagonsensor);
Serial.println(onsensor);


}
