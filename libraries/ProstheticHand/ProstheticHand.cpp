
#include "ProstheticHand.h"

ProstheticHand::ProstheticHand(){
}

ProstheticHand::ProstheticHand(bool useEEPROM){
}

bool isDiagnosticOn(){
  return this->diagnosticOn;
}
setDiagnosticOn(bool flag){
  this->diagnosticOn = flag;
}