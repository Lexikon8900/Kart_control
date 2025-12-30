


#include "cart_header.h"


class Led{
  int LedPin;
  bool ledstate;
  int brightness;
  public:
    Led(int pin,int analog){
      LedPin = pin;
      ledstate = false;
      brightness = analog;
      pinMode(LedPin, OUTPUT);
    }
    void toggle(){
      ledstate = !ledstate;
      brightness = brightnes;
      if (LedPin == A0 || LedPin == 11 || LedPin == 9 || LedPin == A3 || LedPin == A4 || LedPin == A5){
        analogWrite(LedPin,brightness);
      }else{
        digitalWrite(LedPin,ledstate);
      }

    }
  
};
Led frontLed(A0, 255);
Led BlinkR(1,1);
Led BlinkL(2,1);
bool state = true;
  int pin;
int timer;
int light;
int kp; int kd; int ki;
int diff,integ,prop;
int Millis_before = 0;
 int preerror;
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i > 14;i++){
    pinMode(i, INPUT_PULLUP);
  }

  
  Serial.begin(9600); 
}
void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(millis()/666);
  light = analogRead(9) / 4;
  Serial.println(digitalRead(11));
  //Serial.println(digitalRead(10));
  timer = millis()/666;
  if(dr(12) == 0){
    BL_RE(true);
  }else if(dr(10) == 0){
    BL_RE(false);
  }else{
    BlinkL.toggle();
    BlinkR.toggle();
  }
  if(dr(13) == 0 && millis()-Millis_before > 1000){
    frontLed.toggle();
    brightnes = light;
    Millis_before = millis();
  }
  
}
void BL_RE(bool site){
  if(millis() % 600 == 0){
    if(site == true){
      BlinkR.toggle();
    }else{
      BlinkL.toggle();
    }
  }
  
 
}
int correction(int upm){
  
  prop = upm - 1000;
  diff = prop - preerror;
  integral =+ prop;
  int correction = prop*kp + diff*kd + integ*ki;
  preerror = prop;
  return correction;


  }
  
 


 
