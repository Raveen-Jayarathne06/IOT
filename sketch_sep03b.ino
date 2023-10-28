void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT);
}
void loop() {
  int tValue = analogRead(A0);
  float tvoltage = tValue * (5.0 / 1023.0);
  float temp = tvoltage * 100;
   int sensorValue = analogRead(A1);
   float voltage = sensorValue * (5.0 / 1023.0);
 float light = voltage * 20;
  Serial.print("temp=");
  Serial.print(temp);
  Serial.print("C°  "); 

  
Serial.print("Light="); 
Serial.print(light);
 Serial.print("%  " ); 

 
int NsensorValue = analogRead(A2);
int PsensorValue = analogRead(A3);
int KsensorValue = analogRead(A4);
   float Nvoltage = NsensorValue * (5.0 / 1023.0);
 float N = Nvoltage * 20;

   float Pvoltage = PsensorValue * (5.0 / 1023.0);
 float P = Pvoltage * 20;

   float Kvoltage = KsensorValue * (5.0 / 1023.0);
 float K = Kvoltage * 20;



Serial.print("N="); 
Serial.print(N);
Serial.print("%"); 
Serial.print("  P="); 
Serial.print(P);
Serial.print("%"); 
  Serial.print("  K="); 
Serial.print(K);
Serial.print("%"); 
  
 if( digitalRead(9)==LOW){
  Serial.print("  Soil="); 
  Serial.println("wet");
  delay(1000);
 }
  if( digitalRead(9)==HIGH){
    Serial.print("  Soil="); 
  Serial.println("dry");
   delay(1000);
 }

 


}
