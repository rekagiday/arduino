int led = 2;
int button = 3;
int ldr = 0;
int ntc = 1;
int fan = 4;

int r = 7;
int g = 5;
int b = 6;

// The setup routine runs once when you press reset or after power-up:
void setup() {
  pinMode(led, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(button, INPUT);
  pinMode(fan, OUTPUT);
  Serial.begin(9600);
  // On arduino an analog pin does not require any initialization (unlike digital pins).
}

// The loop routine runs over and over again forever:
void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(led, HIGH);    
    digitalWrite(r, LOW);
    delay(100);
    digitalWrite(led, LOW);    
    digitalWrite(g, LOW);
    delay(100);
    digitalWrite(fan, HIGH);    
    digitalWrite(b, LOW);
    delay(100);
    digitalWrite(fan, LOW);    
    digitalWrite(r, HIGH);
    delay(100);
    digitalWrite(led, HIGH);    
    digitalWrite(g, HIGH);
    delay(100);
    digitalWrite(led, LOW);    
    digitalWrite(b, HIGH m);
    delay(100);
  } 
  
/*  if (analogRead(ldr) > 700 && analogRead(ntc) > 515) {
    digitalWrite(led, HIGH);   // turn the LED on
    delay(100);                // wait 100ms
    digitalWrite(led, LOW);    // turn the LED off
    delay(100);                // wait 100ms
  }*/
}

/*
References, hints:
https://www.arduino.cc/en/Reference/analogRead
https://learn.adafruit.com/photocells/

Advanced info:
http://www.tme.eu/hu/details/gm3516/fotoellenallasok/wodeyijia/
http://www.ohmslawcalculator.com/voltage-divider-calculator
http://apcmag.com/arduino-analog-to-digital-converter-how-it-works.htm/
*/

