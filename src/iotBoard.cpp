
#include "iotBoard.h"

iotBoard::iotBoard(String boardType){
  
  _boardType = boardType;
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  
  if (boardType == "arduinoMKR"){
    pinMode(0,OUTPUT);
    pinMode(1,OUTPUT);

    pinMode(8,INPUT);
    pinMode(9,INPUT);
    pinMode(10,INPUT);
    pinMode(11,INPUT);
  }
  
  if (boardType == "arduinoNano33"){
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    
    pinMode(A7,INPUT);
    pinMode(10,INPUT);
    pinMode(11,INPUT);
    pinMode(12,INPUT);
  }
}

bool iotBoard::inputDigital(int pinIn){
  if (digitalRead(pinIn) == HIGH){
    digitalReturn = true;
  }
  else {
    digitalReturn = false;
  }
  return digitalReturn;
}