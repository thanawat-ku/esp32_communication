int ledPin = 5;

void setup(){
    pinMode(ledPin, OUTPUT);
    Serial2.begin(9600);
    Serial2.setTimeout(100);
}

void loop(){
    if(Serial2.available()){
        String v = Serial2.readString();
        if(v.comapreTo("ON")==0){
            digitalWrite(ledPin, HIGH);
        }
        if(v.comapreTo("OFF")==0){
            digitalWrite(ledPin, LOW);
        }
    }
}