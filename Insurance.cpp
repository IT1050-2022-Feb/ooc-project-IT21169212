#include "Insurance.h"
#include <iostream>

Insurance::Insurance(){
  insuranceID = 0;
  insuranceType = "";
}

Insurance::Insurance(int insureID, string insureType){
  insuranceID = insureID;
  insuranceType = insureType;
}

void Insurance::displayInsurance(){
  
}

Insurance::~Insurance(){
  
}