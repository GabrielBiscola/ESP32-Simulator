const int pinled = 22;
const int piscada = 5;


void setup() {
  pinMode(pinled, OUTPUT);
  for(int i = 0; i < piscada; i++){
  digitalWrite(pinled, HIGH);
  delay(500);
  digitalWrite(pinled, LOW);
  delay(500);
  }  

}

void loop() {


}
