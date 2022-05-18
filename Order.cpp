#include "Order.h"
#include<iostream>

Order::Order(){
  orderID = 0;
  orderDate = "";
  orderDescription = "";
  orderAmount = 0;
}

Order::Order(int oID, string oDate, string oDescription, double oAmount){
  orderID = oID;
  orderDate = oDate;
  orderDescription = oDescription;
  orderAmount = oAmount;
}

void Order::displayOrder(){
  
}

Order::~Order(){
  
}