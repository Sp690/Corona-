#include <DHT.h>
#include <DHT_U.h>

#define dht 3
#define lamp 2
#define bt_stop 5
#define buzzer 6
#define bt_start 7
#define DHTTYPE DHT11

DHT sensor(dht, DHTTYPE); //create the object

bool bt_start_state;
bool bt_stop_state;
bool flag;
byte mode;

void setup() {
  pinMode(bt_start, INPUT_PULLUP);
  pinMode(bt_stop, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(lamp, OUTPUT);
}
void loop() {
  int temp = sensor.readTemperature();
  int humidity = sensor.readHumidity();
  bt_start_state = !digitalRead(bt_start);
  bt_stop_state = !digitalRead(bt_stop);
  if(bt_stop_state) mode = 0;
  switch (mode) {
    case 0:
      if (humidity > 60) flag = true;
      if (temp < 20 || temp > 40) flag = true;
      if(bt_start_state) mode = 1;
      turnAllOff();
      break;
    case 1:
      beep(10);
      mode = 2;
      break;
    case 2:
      if(flag){
        digitalWrite(lamp, HIGH);
        for(int i=0; i<=360; i++){
          delay(10000); //hour
        }
        digitalWrite(lamp, LOW);
      } else {
        digitalWrite(lamp, HIGH);
        for(int i=0; i<=180; i++){
          delay(10000); //hour
        }
        digitalWrite(lamp, LOW);
      }
      mode = 3;
      break;
    case 3:
      beep(20);
      mode = 0;
      break;
  }
}

void beep(int times) {
  for (int i = 0; i <= times; i++) {
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
}
void turnAllOff(){
  digitalWrite(buzzer, LOW);
  digitalWrite(lamp, LOW);
  flag = false;
  mode = 0;
}
