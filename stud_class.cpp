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