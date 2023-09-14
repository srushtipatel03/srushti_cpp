#include <iostream>

using namespace std;
class Marksheet
{
    int sci, maths, guj, eng, total;
    double per;
    string name;

    public:
    Marksheet()
    {
        cout << endl << "enter student marks :---> " << endl;
        cout << "enter student name :";
        cin >> name;
        cout << "enter sci marks:";
        cin >> sci;
        cout << "enter maths marks :";
        cin >> maths;
        cout << "enter guj marks :";
        cin >> guj;
        cout << "enter eng marks :";
        cin >> eng;

        total = sci+maths+guj+eng;
        per = total/4;
    }

    void getresult()
    {
        cout << name << "\t" <<  sci << "\t" <<  maths << "\t" <<  guj << "\t" <<  eng << "\t" << per << "\t" << total << "\t" << endl;  
    }
};

int main()
{
    Marksheet marksheet[4];

    cout << endl << "name\t" <<  "sci\t" <<  "maths\t" <<  "guj\t" <<  "eng\t" << "per\t" << "total\t" << endl;
    for(int i=0; i < 4; i++)
    {
        marksheet[i].getresult();
    }
}