#include<iostream>
#include<cstring>
using namespace std;
class Payment
{
    private:
      int Payment_ID;
      double Charge;
      double Pay;

    public:
      Payment();
      Payment(int payID, double payCharge, double paying);
      void calcPay();
      void displayPay();
      ~Payment();
};