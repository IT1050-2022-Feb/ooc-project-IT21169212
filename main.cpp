#include "Category.h"
#include "Customer.h"
#include "Feedback.h"
#include "Insurance.h"
#include "Offer.h"
#include "Order.h"
#include "Payment.h"
#include "Rate.h"
#include "Report.h"
#include "Vehicle.h"

#include <iostream>
using namespace std;

int main(){
  Category* cat = new Category();
  Customer* cust = new Customer();
  Feedback* fdBack = new Feedback();
  Insurance* insure = new Insurance();
  Offer* off = new Offer();
  Order* booking = new Order();
  Payment* pay = new Payment();
  Rate* rates = new Rate();
  Report* rep = new Report();
  Vehicle* vehi = new Vehicle();

  cat->addNewVehicle();
  cat->deleteVehicle();

  cust->setDetails();
  cust->displayDetails();

  fdBack->sendFeedback();
  fdBack->replyFeedback();
  fdBack->viewFeedback();
  
  insure->displayInsurance();

  off->calcOffer();
  off->displayOffer();

  booking->displayOrder();

  pay->calcPay();
  pay->displayPay();

  rates->setRate();
  rates->updateRate();
  rates->deleteRate();

  rep->displayPaymentDetail();
  rep->displayBookingVehicleDetail();

  vehi->setDetails();
  vehi->checkAvailability();
  vehi->displayPrice();

  

  delete cat;
  delete cust;
  delete fdBack;
  delete insure;
  delete off;
  delete booking;
  delete pay;
  delete rates;
  delete rep;
  delete vehi;
  
  return 0;
}