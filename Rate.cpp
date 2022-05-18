#include "Rate.h"
#include <iostream>

Rate::Rate(){
  rateID = 0;
  amount = 0.0;
  status = "";
}

Rate::Rate(int rate_ID, double rate_amount, string rate_status){
  rateID = rate_ID;
  amount = rate_amount;
  status = rate_status;
}

int Rate::setRate(){
  
}

double Rate::updateRate(){
  
}

double Rate::deleteRate(){
  
}

Rate::~Rate(){
  
}