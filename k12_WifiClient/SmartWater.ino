// void setup()
// {
//   Serial.begin(115200);
//   WiFi_SETUP();
// }


// void loop()
// {
//   sendData();
//   delay(10000);
// }
// #define A1A 19
// #define A1B 18
// void setup() {
// pinMode(A1A,OUTPUT);
// pinMode(A1B,OUTPUT);

// digitalWrite(A1A, LOW);
// digitalWrite(A1B, HIGH);
// Serial.println("bumb has started");
// delay(10000);
// digitalWrite(A1A, HIGH);
// digitalWrite(A1B, HIGH);
// Serial.println("bumb has stopped");


// }


// void loop() {
	
// }
    #define DHTTYPE DHT11
    void setup()
    {
    DHT dht(DHTPIN, DHTTYPE); 
	  dht.begin(); 

    } 
    void loop(){
          float t = dht.readTemperature(); 

    }  
