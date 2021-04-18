  
int sensorPin = A0;                
int esikDegeri = 400;            
int rolepin = 9;                
int veri;                          
void setup() {
  pinMode(rolepin, OUTPUT);    
}
void loop() {
  veri = analogRead(sensorPin);   
  if(veri > esikDegeri){          
    digitalWrite(rolepin, HIGH); 
    delay(500);
    digitalWrite(rolepin, LOW);
    delay(500);
  }
  else{                           
    digitalWrite(rolepin, LOW);
  }

  }
