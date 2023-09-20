#include <iostream>
using namespace std;

// Base class
class Number
{
protected:
    int n;

public:
    void getNumber() 
    {
        cout << "Enter a number: ";
        cin >> n;
    }
};

// Derived class
class Factorial : public Number 
{
public:
    int f() 
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++) 
        {
            factorial *= i;
        }
        return factorial;
    }
};

int main() 
{
    Factorial fact;
    fact.getNumber();
    int ans = fact.f();
    cout << "Factorial of " << ans << endl;
}