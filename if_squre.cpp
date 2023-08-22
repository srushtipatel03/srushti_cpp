#include <iostream>

using namespace std;

int main()
{
   int l,a;

   cin >> l >> a;

   a=4*l;

   cout << "value is :" << a;
 
   if(a<10)
   {
     cout << "right";
   }else 
   {
     cout << "wrong";
   }
   
}