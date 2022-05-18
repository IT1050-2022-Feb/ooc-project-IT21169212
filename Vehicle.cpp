#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(){
  vehicleID = 1;
  name = "";
  type = "";
  category = "";
  status = "";
  price = 0.0;
}

Vehicle::Vehicle(int vID, string vName, string vType, string vCat, string vStatus, double vPrice){
  vehicleID = vID;
  name = vName;
  type = vType;
  category = vCat;
  status = vStatus;
}

void Vehicle::setDetails(){
  
}

double Vehicle::displayPrice(){
  
}

void Vehicle::checkAvailability(){
  
}

Vehicle::~Vehicle(){
  
}