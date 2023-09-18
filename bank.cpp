// DEPOSITE , WITHDROW, SHOW FOR BANK...
#include <iostream>

using namespace std;
class BANK
{
   int d,w,sb=0;

   public:
   int deposite()
   {
    cout << "enter amount :";
    cin >> d;
    sb=sb+d;
   }
   void withdraw()
   {
    cout << "enter the amount :";
    cin >> w;
    sb=sb-w;
   }
   void show_balance()
   {
    cout << "your current balance is :" << sb << endl;
   }
};

int main()
{
    int ch;
    BANK bank;

    cout << "press 1 for deposite amount" << endl;
    cout << "press 2 for withdraw amount" << endl;
    cout << "press 3 for desplay your amount" << endl;
    cout << "press 0 for exit" << endl;
    cout << "\n \n";

    do
    {
       cout << "press button for your transaction :";
       cin >> ch;

       switch(ch)
       {
         case 1:
         bank.deposite();
         break;

         case 2:
         bank.withdraw();
         break;

         case 3:
         bank.show_balance();
         break;

         case 0:
         break;

         default:
         cout << "wrong";
         break;
       }
    }
    while(ch!=0);
}