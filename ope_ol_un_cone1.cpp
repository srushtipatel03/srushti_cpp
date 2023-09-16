// operator overloding in unary operator find to cone area 

#include <iostream>

using namespace std;
class cone
{
int radius, height ;

public:
void setdata(int ra , int hei)
{
    radius = ra;
    height = hei;
}
cone operator++(int)
{
    cone c;
    c.radius = radius++;
    c.height = height++;
    return c;
}
int getdata()
{
    return 3.14 * radius * radius * height / 3;
}
};

int main ()
{
    cone cone1,cone2;

    cone1.setdata(5,10);
    cout << "cone 1 is :- " << cone1.getdata() << endl;

    cone1++;
    cout << "cone 2 is :- " << cone1.getdata() << endl;
}