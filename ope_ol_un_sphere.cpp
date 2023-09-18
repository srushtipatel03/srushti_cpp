// operator overloding in unary operator find to sphere area 

#include <iostream>

using namespace std;
class sphere
{
int radius;

public:
void setdata(int ra)
{
    radius = ra;
}
sphere operator--(int)
{
    sphere s;
    s.radius = radius--;
   
    return s;
}
int getdata()
{
    return 4 * 3.14 * radius * radius ;
}
};

int main ()
{
    sphere sphere1,sphere2;

    sphere1.setdata(10);
    cout << "Sphere 1 is :- " << sphere1.getdata() << endl;

    sphere1--;
    cout << "Sphere 2 is :- " << sphere1.getdata() << endl;
}