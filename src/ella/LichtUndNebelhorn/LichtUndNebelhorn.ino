
int led = 13; // pin an dem die led angeschlossen ist
int nebelhorn = 12; // pin an dem die led angeschlossen ist
int rec = 2; // pin an dem der receiver angeschlossen ist
int ch1=0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(nebelhorn, OUTPUT);
  pinMode(rec, INPUT);
}


void loop() {
    ch1 = pulseIn(rec, HIGH, 25000); 
    if (ch1 < 1200) {
      LichtEin();
    } else if (ch1 < 1600) {
      LichtAus();
    } else {
      NebelhornTuut();
    }
}

void LichtEin() {
  digitalWrite(led, HIGH);    
}

void LichtAus() {
  digitalWrite(led, LOW);
}

void NebelhornTuut() {
  digitalWrite(nebelhorn, HIGH);
  delay(1000);
  digitalWrite(nebelhorn, LOW);
  
}
