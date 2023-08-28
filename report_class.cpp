/*6. Define a class REPORT with the following specification:

Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject

Public members:
READINFO() function to accept values for adno, name, marks. Invoke the function
GETAVG()
DISPLAYINFO() function to display all data members of a report on the screen.
You should give function definitions.*/

#include<iostream>
using namespace std;
class Student {
  private:
    int adno;
    char name[21];
    float marks[5];
    float average;

    float GETAVG() {
      float sum = 0;
      for(int i = 0; i < 5; i++) {
        sum += marks[i];
      }
      return sum / 5;
    }

  public:
    void READINFO() {
      cout << "Enter Admission Number: ";
      cin >> adno;
      cout << "Enter Name: ";
      cin.ignore();
      cin.getline(name, 21);
      cout << "Enter Marks for 5 Subjects: " << "\n";
      for(int i = 0; i < 5; i++) {
        cin >> marks[i];
      }
      average = GETAVG();
    }

    void DISPLAYINFO() {
      cout << "Admission Number: " << adno << endl;
      cout << "Name: " << name << endl;
      cout << "Marks: ";
      for(int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
      }
      cout << endl;
      cout << "Average: " << average << endl;
    }
};
int main ()
{
    Student stu; // stu is a student class object
    stu.READINFO();
    stu.DISPLAYINFO();
    return 0;   
}