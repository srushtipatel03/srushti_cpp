#include <iostream>
using namespace std;
int main()
{
    char input ='f';
    cin >> input;
    switch(input)
    {
        case 'a':
        cout << "exelent";
        break;

        case 'b':
        cout << "vary good";
        break;

        case 'c':
        cout << "good";
        break;

        case 'd':
        cout << "not bad";
        break;
    }
}