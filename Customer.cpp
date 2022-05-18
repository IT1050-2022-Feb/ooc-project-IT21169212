#include "Customer.h"
#include <iostream>

Customer::Customer(){
  cusID = 0;
  name = "";
  type = "";
  address = "";
  email = "";
  mobile = 0000000000;
}

Customer::Customer(int customerID, string customerName, string customerType, string customerAddress, string customerEmail, int customerMobile){
  cusID = customerID;
  name = customerName;
  type = customerType;
  address = customerAddress;
  email = customerEmail;
  mobile = customerMobile;
}

void Customer::setDetails(){
  
}

void Customer::displayDetails(){
  
}

Customer::~Customer(){
  
}