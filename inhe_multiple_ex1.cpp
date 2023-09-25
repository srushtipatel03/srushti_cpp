#include <iostream>
using namespace std;

class Bird
{
    public:
    void fly()
    {
        cout << "bird can fly" << endl;
    }
};
class Fish
{
    public:
    void swim()
    {
        cout << "fish can swim" << endl;
    }
};
class Animal : protected Bird, protected Fish
{
    public:
    void animal()
    {
        cout << "animal can " << endl;
        fly();
        swim();
    }
};

int main()
{
    Animal ani;
    ani.animal();
}