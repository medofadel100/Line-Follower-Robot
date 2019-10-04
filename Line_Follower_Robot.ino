/*------ Program for Line Follower Robot using Arduino----- */
/*-------definning Inputs------*/
#define LS 1      // left sensor
#define CS 2      // Center sensor
#define RS 3      // right sensor
/*-------definning Outputs------*/
  // Motor Pin
int IN1=8;              // input 1 for motor 1
int IN2=9 ;            // input 2 for motor 1
int IN3=10;           // input 1 for motor 2
int IN4=11;          // input 2 for motor 2

int IN5=12;         // input 1 for motor 3
int IN6=13;        // input 2 for motor 3
int IN7=7 ;       // input 1 for motor 4
int IN8=5 ;      // input 1 for motor 4
/*------definning Sensor Outputs------*/
int L = digitalRead(1);  
int C = digitalRead(2);
int R = digitalRead(3);
void setup()
{
  pinMode(LS, INPUT);
  pinMode(CS, INPUT);
  pinMode(RS, INPUT);
  pinMode (IN1,OUTPUT);
  pinMode (IN2,OUTPUT);
  pinMode (IN3,OUTPUT);
  pinMode (IN4,OUTPUT);
  pinMode (IN5,OUTPUT);
  pinMode (IN6,OUTPUT);
  pinMode (IN7,OUTPUT);
  pinMode (IN8,OUTPUT);
}
void loop()
{
  if(L=R!=C)     // Move Forward
  {
    forward ();
  }

  
  if(C=R!=L)     // Turn right
  {
    right();
  }
  
  if(L=C!=R)     // turn left
  {
    left();
  }
  
}
    //robot Move Forward function
  void forward ()
{
  digitalWrite (IN1,HIGH);
  digitalWrite (IN2,LOW);
  digitalWrite (IN3,HIGH);
  digitalWrite (IN4,LOW);
  digitalWrite (IN5,HIGH);
  digitalWrite (IN6,LOW);
  digitalWrite (IN7,HIGH);
  digitalWrite (IN8,LOW); 
  
}

  //robot Move Right function
  void right()
{
  digitalWrite (IN1,HIGH);
  digitalWrite (IN2,LOW);
  digitalWrite (IN3,HIGH);
  digitalWrite (IN4,LOW);
  digitalWrite (IN5,HIGH);
  digitalWrite (IN6,LOW);
  digitalWrite (IN7,LOW);
  digitalWrite (IN8,LOW);
  
}

  //robot Move Left function
  void left()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);
  
}


  //robot Stop function
  void stoop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);
  
}
