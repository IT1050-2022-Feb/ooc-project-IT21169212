#include <iostream>
#include <string>
using namespace std;

class Vehicle{

private:
  int vehicleID;
  string name;
  string type;
  string category;
  string status;
  double price;

public:
  Vehicle();
  Vehicle(int vID, string vName, string vType, string vCat, string vStatus, double vPrice);
  void setDetails();
  double displayPrice();
  void checkAvailability();
  ~Vehicle();
};