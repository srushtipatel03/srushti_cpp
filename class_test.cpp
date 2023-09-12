/*3. Define a class TEST in C++ with following description:

Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)

Public Members
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
  NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members*/

#include <iostream>
#include <string.h>
using namespace std;
class TEST {
  private:
  
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

    int CALCNTR() {
      return ( NoCandidate / 100 + 1);
    }
    public:

    void SCHEDULE() {
      cout << "Enter Test Code: ";
      cin >> TestCode;
      cout << "Enter Description: ";
      cin >> Description;
      cout << "Enter Number of Candidates: ";
      cin >> NoCandidate;
      CenterReqd = CALCNTR();
    }

    void DISPTEST() {
      cout << "Test Code: " << TestCode << endl;
      cout << "Description: " << Description << endl;
      cout << "Number of Candidates: " << NoCandidate << endl;
      cout << "Number of Centers Required: " << CenterReqd << endl;
    }
};
int main ()
{
     TEST stu; // stu is a test class object
     
     stu.SCHEDULE();
     stu.DISPTEST();
    return 0;
}
/*
Enter Test Code: 10
Enter Description: 100
Enter Number of Candidates: 90

output:--

Test Code: 10
Description: 100
Number of Candidates: 90     
Number of Centers Required: 1
*/