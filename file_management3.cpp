// file managment

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char input[50];

    //store file data
    ofstream os;
    os.open("file3.txt");

    cout << "Please enter your name :- " << endl;
    cin.getline(input,100);
    os << input << endl;

    cout << "Pleas enter contacr number :- " <<endl;
    cin >> input;
    cin.ignore();
    os << input << endl;

    os.close();

    // read file data
    ifstream is;
    string line;
    is.open("file3.txt");

    cout<<"Reading from a text file :- " << endl;
    while (getline(is,line))
    {
        cout << line << endl;
    }
    is.close();
    return 0;
}