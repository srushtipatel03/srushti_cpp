#include <iostream>
using namespace std;

template <class T>
void display(T t1)
{
    cout << "Displaying Template:- " << t1 << endl;
}

template <class x,class y>
void display(x a,y b)
{
    cout << "Displaying Template :-"
    << a << "\t" 
    << b << endl;
}

int main()
{
    display(200);
    display(12.56);
    display('A');
    display('A', 1.25);
    display('B', 50 );
    display(25, 1.25 );

return 0;
}