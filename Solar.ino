int num = 3;
int pins[] = {1, 2, 3};;
String names[] = {"temp","speed","pressure"};;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < num; i++){
    Serial.print(names[i]+":" + analogRead(pins[i]) +"&");
  }

}
