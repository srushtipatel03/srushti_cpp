// operator overloading

#include <iostream>
using namespace std;
class triangle
{
    int length, height, breath;

    public:
    void setdata(int len, int he, int bre)
    {
        length = len;
        height = he;
        breath = bre;
    }
    triangle operator+(triangle &b)
    {
        triangle tri;

        tri.length = length + b.length;
        tri.height = height + b.height;
        tri.breath = breath + b.breath;

        return tri;
    }
    int getdata()
    {
        return length*height*breath;
    }
};

int main()
{
    triangle tri1, tri2, tri3;

    tri1.setdata(2,2,2);
    cout << "triangle 1 is : " << tri1.getdata() << endl;

    tri2.setdata(3,3,3);
    cout << "triangle 2 is : " << tri2.getdata() << endl;

    tri3 = tri1 + tri2;
    cout << "triangle 3 --> the total of triangle 1 & triangle 2 is : " << tri3.getdata() << endl;
}