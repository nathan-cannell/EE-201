void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(13);
  if(value == 1) {
    Serial.println("Hello World");
  } else{
    Serial.println("Its 2023!");
  }

}
