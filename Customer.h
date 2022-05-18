#include <iostream>

using namespace std;

class Customer{
  private:
    int cusID;
    string name;
    string type;
    string address;
    string email;
    int mobile;

  public:
    Customer();
    Customer(int customerID, string customerName, string customerType, string customerAddress, string customerEmail, int customerMobile);
    void setDetails();
    void displayDetails();
    ~Customer();
};