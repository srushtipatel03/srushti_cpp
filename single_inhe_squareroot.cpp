#include <iostream>
#include <cmath>

using namespace std;

class Number 
{
protected:
    double n;

public:
    void getNumber() 
    {
        cout << "ENTER ANY NUMBER  ---> ";
        cin >> n;
    }
};
class SquareRoot : public Number 
{
public:
    void s() 
    {
        double ans = sqrt(n);
        cout << "SQUARE ROOT OF " << n << " IS --> " << ans << endl;
    }
};

int main() 
{
    SquareRoot sqr;
    sqr.getNumber();
    sqr.s();

    return 0;
}