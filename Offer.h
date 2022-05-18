#include <iostream>
using namespace std;

class Offer{

private:
  int offerID;
  float offerPercentage;
  float offerAmount;

public:
  Offer();
  Offer(int offID, float offPrice, float offPercentage);
  double calcOffer();
  void displayOffer();
  ~Offer();
};