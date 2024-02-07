char m;
char n;

void setup() {
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    m=  Serial.read();}
  if(m=='l'||digitalRead(2)==1)  {
    analogWrite(3,analogRead(A0)/4);
   Serial.println('l');  
    
  }
  
     else if(m=='s'||digitalRead(2)==0){
            
  digitalWrite(3,0);     
  Serial.println('s');   
            
 }    if(Serial.available()>0){
           n=  Serial.read();}
          if(n=='r'||digitalRead(4)==1)  {
          analogWrite(5,analogRead(A1)/4);
          Serial.println('r');  
    
         }
  
  
          else if(n=='s'||digitalRead(4)==0){
            
          digitalWrite(5,0);     
          Serial.println('s');   
            
            }              

  
}