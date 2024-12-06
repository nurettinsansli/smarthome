String readString = "";
#define led 13 
#define led1 12
#define led2 11
#define led3 10
void setup() {
pinMode(led, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
digitalWrite(led, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
Serial.begin(9600);

}
void loop() {
while (Serial.available()) {
char c = (char)Serial.read();
readString += c;
}

if (readString.length() > 0) {

if (readString == "Lambayı aç") {
digitalWrite(led, HIGH);
Serial.print("lamba açıldı");
} 
else if (readString == "Televizyonu aç") {
digitalWrite(led1, HIGH);
Serial.print("televizyon açıldı");
}
else if (readString == "Klimayı aç") {
digitalWrite(led2, HIGH);
Serial.print("klima açıldı");
}
else if (readString == "Kapıyı aç") {
digitalWrite(led3, HIGH);
Serial.print("kapı açıldı");
}

else if (readString == "Lambayı kapat") {
digitalWrite(led, LOW);
Serial.print("Lamba kapandı");
}
else if (readString == "Televizyonu kapat") {
digitalWrite(led1, LOW);
Serial.print("Televizyon kapandı");
}
else if (readString == "Klimayı kapat") {
digitalWrite(led2, LOW);
Serial.print("Klima kapandı");
}
else if (readString == "Kapıyı kapat") {
digitalWrite(led3, LOW);
Serial.print("Kapı kapandı");
}



else {
Serial.print("Seni anlayamadım.");
}


readString = "";
}

delay(100);
}
