#include<iostream>

using namespace std;

class Area
{
    public :

    Area(double r)
    {
        cout << "Area Of Circle is. : "<< 3.14 * r * r;
    }
    Area(int s)
    {
        cout << "Area Of Squre is. : "<< s * s;
    }
    Area(double w ,double h )
    {
        cout << "Area Of Rectangle is. : "<< w * h;
    }
    Area(int b , int h)
    {
        cout << "Area Of Triangle is. : "<< (b * h) / 2;
    }
};

int main()
{
    Area area(20.1);
}