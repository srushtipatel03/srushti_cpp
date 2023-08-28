/*1. Define a class student with the following specification

Private members of class student
admno integer
sname 20 character
eng, math, sci float
total float
ctotal() a function to calculate eng + math + sci with float return type.

Public member function of class student
Takedata() Function to accept values for admno, sname, eng, sci and invoke
ctotal() to calculate total.
Showdata() Function to display all the data members on the screen*/

#include <iostream>

using namespace std;
class student{
    int admno;
    char sname[20];
    float eng,math,sci,total;

    float ctotal()
    {
        return eng+math+sci;
    }

    public:

    void tackdata(){
        cout << "enter student no. :";
        cin >> admno;
        cout << "enter student name :"; 
        cin >> sname;
        cout << "enter student eng marks :";
        cin >> eng;
        cout << "enter student math marks :";
        cin >> math;
        cout << "enter student sci marks :";
        cin >> sci;

        total = ctotal();
    }

    void showdata()
    {
       cout << "\nstudent no. is :" << admno;
       cout << "\nstudent name is :" << sname;
       cout << "\neng\tmath\tsci\ttotal";
       cout << "\n" << eng << "\t" << math << "\t" << sci << "\t" << total; 
    }

};

int main()
{
    student stu; //object of class

    stu.tackdata();
    stu.showdata();

    return 0;
}