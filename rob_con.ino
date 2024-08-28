#define BLYNK_TEMPLATE_ID "TMPL3-gSgRLyq"
#define BLYNK_TEMPLATE_NAME "IoT based Robotic Arm"
#define BLYNK_AUTH_TOKEN "UoHd_HR_YxXC78V0xLyq4fWA2TgtoJRN"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "vivo V29e";
char pass[] = "12345678";

Servo servo;
Servo servo1;
Servo servo2;
Servo servo3;

BLYNK_WRITE(V0){
 servo.write(param.asInt());
}
BLYNK_WRITE(V1){
 servo1.write(param.asInt());
}
BLYNK_WRITE(V2){
 servo2.write(param.asInt());
}
BLYNK_WRITE(V3){
 servo3.write(param.asInt());
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Blynk.begin(auth,ssid,pass);
  servo.attach(16);
  servo1.attach(4);
  servo2.attach(2);
  servo3.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
