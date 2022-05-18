#include<iostream>
#include"Feedback.h"
using namespace std;

Feedback::Feedback()
{
   Feedback_ID = 0;
   message = "";
}
Feedback::Feedback(int Fb_Id, string mess)
{
  Feedback_ID = Fb_Id;
  message = mess;
}
void Feedback::sendFeedback()
{
  
}
void Feedback::viewFeedback()
{
  
}
void Feedback::replyFeedback()
{
  
}
Feedback::~Feedback()
{
  
}