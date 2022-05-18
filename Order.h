#include <iostream>
#include <string.h>
using namespace std;

class Order{

private:
  int orderID;
  string orderDate;
  string orderDescription;
  double orderAmount;

public:
  Order();
  Order(int oID, string oDate, string oDescription, double oAmount);
  void displayOrder();
  ~Order();
};