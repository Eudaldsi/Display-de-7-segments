const int A = 5;        //4
const int B = 6;        //5
const int C = 7;        //passat punt esquerra 7  
const int D = 8;        //8
const int E = 9;        //
const int F = 10;       //
const int G = 11;         
const int delayA =1000;


void setup()
{
  pinMode(A, OUTPUT);     
  pinMode(B, OUTPUT);     
  pinMode(C, OUTPUT);     
  pinMode(D, OUTPUT);   
  pinMode(E, OUTPUT);     
  pinMode(F, OUTPUT);    
  pinMode(G, OUTPUT);    
  
}


void loop()
{
  digitalWrite(A, LOW);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);
  
  delay(delayA);                  
  
  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);   
  digitalWrite(G, HIGH);
  
  delay(delayA);                  
 
  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, LOW);
  
  delay(delayA);       

  digitalWrite(A, LOW);    
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);
  
  delay(delayA);                  
 
  digitalWrite(A, HIGH);    
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);   
  digitalWrite(G, HIGH);
  
  delay(delayA);                  
 
  digitalWrite(A, HIGH);    
  digitalWrite(B, LOW);    
  digitalWrite(C, LOW);   
  digitalWrite(D, LOW);    
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);   
  digitalWrite(G, LOW);
  
  delay(delayA);                  
  
  
}
