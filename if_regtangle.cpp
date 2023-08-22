#include <iostream>

using namespace std;

int main()
{
    int l,b,a;

    cin >> l >> b;
    a=l*b;

    cout << a;

    if(a>45)
    {
       cout << "right";
    }else 
    {
        cout << "wrong";
    }
}