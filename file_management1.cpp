// file managment
// ofstream :-- stream class to write on files
// ifstream :-- stream class to read from  files
// ffstream :-- stream class to both read and write from to files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"wel_come to skillqode";
        filestream<<"\nwe started new lab";
        filestream<<"\nwe started new branch";
        filestream.close();

    }else
    cout << "file opening is fail.";
    return 0;
}