#include <iostream>
using namespace std;

class Rate{
  private:
    int rateID;
    double amount;
    string status;

  public:
    Rate();
    Rate(int rate_ID, double rate_amount, string rate_status);
    int setRate();
    double updateRate();
    double deleteRate();
    ~Rate();
};