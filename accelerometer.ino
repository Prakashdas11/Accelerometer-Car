int Left1=7,Left2=8;           // Motor  M1 left
int Right1=3,Right2=4;         // Motor  M2 Right
int X=A2;                    // X Axis is given to A2 
int Y=A1;                    // Y Axis is given to A1
int Xvalue,Yvalue;           // Variables for storing the value

void setup()
{
  pinMode(Left1,OUTPUT);          // Motors are declared as output
  pinMode(Left2,OUTPUT);
  pinMode(Right1,OUTPUT);
  pinMode(Right2,OUTPUT);
  pinMode(X,INPUT);              // A2 & A1 pins are declared as input
  pinMode(Y,INPUT);
}
void loop()
{
  Xvalue=analogRead(X);           //  X axis values stored in a variable
  Yvalue=analogRead(Y);          //  Y axis values stored in a variable

  if(Xvalue>=345 && Xvalue<=360 && Yvalue>=340 && Yvalue<=355)       // The boundary values are set to stop the motors
  {
    Stop();
  }
  else if(Xvalue>=388 && Xvalue<=410)             // The X axis values for vertical movement
  {
    forward();
  }
  else if(Xvalue>=270 && Xvalue<=305)
  {
    back();
  }
  else if(Yvalue>=280 && Yvalue<=300)            // The Y axis values for horizontal movement 
  {
    left();
  }
  else if(Yvalue>=375 && Yvalue<=410)
  {
    right();
  }
}

void forward()                                      // forward 
{
  digitalWrite(Left1,HIGH);
  digitalWrite(Left2,LOW);
  digitalWrite(Right1,HIGH);
  digitalWrite(Right2,LOW); 
}
void back()                                        // backward
{
  digitalWrite(Left1,LOW);
  digitalWrite(Left2,HIGH);
  digitalWrite(Right1,LOW);
  digitalWrite(Right2,HIGH);
}
void left()                                        // left 
{
  digitalWrite(Left1,HIGH);
  digitalWrite(Left2,LOW);
  digitalWrite(Right1,LOW);
  digitalWrite(Right2,HIGH);
}
void right()                                       // right 
{
  digitalWrite(Left1,LOW);
  digitalWrite(Left2,HIGH);
  digitalWrite(Right1,HIGH);
  digitalWrite(Right2,LOW);
}
void Stop()                                      // stop 
{
  digitalWrite(Left1,LOW);
  digitalWrite(Left2,LOW);
  digitalWrite(Right1,HIGH);
  digitalWrite(Right2,HIGH);
}
