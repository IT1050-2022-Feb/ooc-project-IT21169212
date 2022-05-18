#include "Offer.h"
#include <iostream>

  Offer::Offer(){
    offerID = 0;
    offerPercentage = 0;
    offerAmount = 0;
  }

  Offer::Offer(int offID, float offPrice, float offPercentage){
    offerID = offID;
    offerPercentage = offPrice;
    offerAmount = offPercentage;
  }

  double Offer::calcOffer(){
    
  }

  void Offer::displayOffer(){
    
  }

  Offer::~Offer(){
    
  }