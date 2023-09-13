#include <iostream>

using namespace std;
class Circle 
{
    double radius;

    public :

    void setdata(double r)
    { 
        radius = r;
    }

    Circle operator+(Circle &c)
    {
        Circle cir;

        cir.radius = radius + c.radius;

        return cir;
    }

    double getdata()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle cir1,cir2,cir3;

    cir1.setdata(5.2);
    cout << "Circle 1 Value is : " << cir1.getdata() << endl;
    
    cir2.setdata(10.2);
    cout << "Circle 2 Value is : " << cir2.getdata() << endl;

    cir3 = cir1 + cir2;
    cout << "Circle 3 Value is : " << cir3.getdata() << endl;
}