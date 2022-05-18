#include <iostream>
using namespace std;

class Report{
  private:
    int reportID;
    string description;

  public:
    Report();
    Report(int repID, string repDesc);
    void displayPaymentDetail();
    void displayBookingVehicleDetail();
    ~Report();
};