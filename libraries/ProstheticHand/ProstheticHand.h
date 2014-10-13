
#ifndef PROSTHETIC_HAND_H
#define PROSTHETIC_HAND_H

#include <Servo.h>

#include <EEPROM.h>

#define DEFAULT_THUMB_PIN  2
#define DEFAULT_INDEX_PIN  3
#define DEFAULT_MIDDLE_PIN  4
#define DEFAULT_RING_PIN  5
#define DEFAULT_PINKY_PIN  6
#define DEFAULT_WRIST_PIN  7
 

 class ProstheticHand {
   public:
     ProstheticHand();
     ProstheticHand(bool useEEPROM);
     bool isDiagnosticOn();
     setDiagnosticOn(bool flag);
   private:
    bool diagnosticOn;
    Servo thumbServo;   
    Servo indexServo;
    Servo middleServo;
    Servo ringServo;
    Servo pinkyServo;
    Servo wristServo;       
 };
 
 #endif