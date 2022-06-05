
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(INPUT,A0);
}

void loop() {
  // put your main code here, to run repeatedly:
int analogSensor = analogRead(A0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);

  if(analogSensor > 5   &&  analogSensor < 20){
      Serial.println("smoke detected");
   
    } 
    
  if(analogSensor > 600){
      Serial.println("gas detected");
    
    }
  delay(100);
}
