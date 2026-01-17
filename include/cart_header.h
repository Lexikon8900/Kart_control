#define  ABS_ENABLED  //abs subsyst
#define dw digitalWrite
#define aw analogWrite
#define dr digitalRead
#define ON 255 //led analog
#define OFF 0
#define FRLD              //front led
#define BLLDR          //blink rechts und links
#define BLLDL
#define ROTAM          //drehzahl
#define ROTAA    0      //achse
#define ss
#define s
#define  s 
#define s
#define s
#define s
#define s
bool state = true;
int pin;
int timer;
int light;
int kp; int kd; int ki;
int diff,integral,prop;
int Millis_before = 0;
int brightnes;
#include  <Arduino.h>
#include <esp32-hal.h>
#include <esp32-hal-gpio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <WIFI.h>
#include <HTTPClient.h>
#include <ESP32Servo.h>
#define ENGINE_START
#define zünd_pin 5
int threshold = 2000;
int magnet;
int pointer = 0;







