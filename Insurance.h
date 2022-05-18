#include <iostream>
using namespace std;

class Insurance{
private:
  int insuranceID;
  string insuranceType;

public:
  Insurance();
  Insurance(int insureID, string insureType);
  void displayInsurance();
  ~Insurance();
};