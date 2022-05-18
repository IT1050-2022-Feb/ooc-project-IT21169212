#include<iostream>
#include<cstring>
using namespace std;

class Feedback
{
    private:
      int Feedback_ID;
      string message;

    public:
      Feedback();
      Feedback(int Fb_Id, string mess);
      void sendFeedback(); 
      void viewFeedback(); 
      void replyFeedback(); 
      ~Feedback();
};