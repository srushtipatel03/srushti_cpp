#include <iostream>
using namespace std;
  
class Person 
{
    int id;
    string name;
  
public:
    void set_p()
    {
        cout << "Enter the Student Id --> ";
        cin >> id;
        cout << "Enter the Student  Name --> ";
        cin >> name;
    }
    
    void display_p()
    {
        cout << endl << "student Id :- " << id << "\nstudent Name :- " << name <<endl;
    }
};
  
class Student : private Person 
{
    int guj ,eng,math,total,per;
  
public:
    void set_s()
    {
        set_p();
        
        cout << "Enter the gujarati mark --> ";
        cin >> guj;
        cout << "Enter the english mark -->  ";
        cin >> eng;
        cout << "Enter the math mark --> ";
        cin >> math;
        total = guj + eng + math;
        per= (total*100)/300;
    }

     void display_s()
    {
        display_p();
      
       cout << "guj" << "\t" << "eng"<< "\t" << "math" << "\t" << "total" << "\tper" << endl;
       cout << guj << "\t" << eng << "\t" << math << "\t" << total << "\t" << per << endl;
    }
  
};
  
int main()
{
    Student s;
    s.set_s();
    s.display_s();
}