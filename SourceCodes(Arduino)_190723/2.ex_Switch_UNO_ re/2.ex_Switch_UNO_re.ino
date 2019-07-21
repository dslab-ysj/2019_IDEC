/****************************************************************************
* Copyright 2019 DS LAB All Rights Reserved.
*
* Filename: 2.ex_Switch_UNO_.ino
* Author: sj.yang
* Release date: 2019/07/15
* Version: 1.0
****************************************************************************/
int PORT_SWI = 1;

int PIN_SWL = 7;
int PIN_SWR = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(PIN_SWL, INPUT);
  pinMode(PIN_SWR, INPUT);
}

void loop()
{
  int swl_value = 0;
  int swr_value = 0;

  while(!(swl_value || swr_value))
  {
    swl_value = digitalRead(PIN_SWL);
    swr_value = digitalRead(PIN_SWR);
  }  
  if (swl_value) Serial.print("Left Switch ON ");
  if (swr_value) Serial.print("Right Switch ON");
  Serial.println();  
  delay(1000);
}
