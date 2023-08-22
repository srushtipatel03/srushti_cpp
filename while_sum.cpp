#include <iostream>
using namespace std;
int main()
{
    int a=1,s=0;
    while(a<=10)
    {
        s+=a;
        a++;
    }
    cout << s;
}