int RA=2,RB=3,RC=4,RD=5,INH1=6,INH2=7;// 5=RA 4=RB 3=RC
void setup() {
  // put your setup code here, to run once:
  pinMode(RA,OUTPUT);
  pinMode(RB,OUTPUT);
  pinMode(RC,OUTPUT);
  pinMode(RD,OUTPUT);
  pinMode(INH1,OUTPUT);
  pinMode(INH2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* digitalWrite(RA,LOW);digitalWrite(RB,LOW);digitalWrite(RC,LOW);
  digitalWrite(RD,LOW);digitalWrite(INH1,HIGH);digitalWrite(INH2,HIGH);
  delay(20);//all zero */
  digitalWrite(INH1,LOW);digitalWrite(INH2,HIGH);
  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//0

  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(2000);//1 
  
  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,HIGH); digitalWrite(RA,HIGH);
  delay(2000);//2

  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,HIGH); digitalWrite(RA,LOW);
  delay(2000);//3

  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,HIGH); digitalWrite(RA,LOW);
  delay(2000);//4

  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,HIGH); digitalWrite(RA,HIGH);
  delay(2000);//5

  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(2000);//6


  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//7

 
  digitalWrite(RD,HIGH);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//8

  digitalWrite(RD,HIGH);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(2000);//9

  digitalWrite(RD,HIGH);digitalWrite(RC,HIGH); digitalWrite(RB,HIGH); digitalWrite(RA,HIGH);
  delay(2000);//10

  digitalWrite(RD,HIGH);digitalWrite(RC,HIGH); digitalWrite(RB,HIGH); digitalWrite(RA,LOW);
  delay(2000);//11

  digitalWrite(RD,HIGH);digitalWrite(RC,LOW); digitalWrite(RB,HIGH); digitalWrite(RA,LOW);
  delay(2000);//12

  digitalWrite(RD,HIGH);digitalWrite(RC,LOW); digitalWrite(RB,HIGH); digitalWrite(RA,HIGH);
  delay(2000);//13

  digitalWrite(RD,HIGH);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(2000);//14

  digitalWrite(RD,HIGH);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//15

   digitalWrite(INH1,HIGH);digitalWrite(INH2,LOW);

  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//0

  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(2000);//1 
  
  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,HIGH); digitalWrite(RA,HIGH);
  delay(2000);//2

  digitalWrite(RD,LOW);digitalWrite(RC,LOW); digitalWrite(RB,HIGH); digitalWrite(RA,LOW);
  delay(2000);//3

  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,HIGH); digitalWrite(RA,LOW);
  delay(2000);//4

  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,HIGH); digitalWrite(RA,HIGH);
  delay(2000);//5

  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,HIGH);
  delay(2000);//6


  digitalWrite(RD,LOW);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//7

 
  digitalWrite(RD,HIGH);digitalWrite(RC,HIGH); digitalWrite(RB,LOW); digitalWrite(RA,LOW);
  delay(2000);//8
  
}
