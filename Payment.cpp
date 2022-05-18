#include<iostream>
#include<cstring>
#include"Payment.h"

Payment::Payment(){
  Payment_ID = 0;
  Charge = 0;
  Pay = 0;
}

Payment::Payment(int payID, double payCharge, double paying){
  Payment_ID = payID;
  Charge = payCharge;
  Pay = paying;
}

void Payment::calcPay(){
  
}

void Payment::displayPay(){
  
}

Payment::~Payment(){
  
}