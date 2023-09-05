#include <iostream>
using namespace std;
class area
{
    int a,b,l,t,s,r;
 public :

 void setdata()
 { 
     cout << "enter square area -->" ;
     cin >> l;
     s=l*l;
     cout << s;
     cout << "\n";
 }
 void setdata(int)
 {
    cout << "\nenter rectangle area one-->" ;  
    cin >> l;
    cout << "enter rectangle area two-->" ;  
    cin >> a;  
    b=l*a; 
    cout << b;
    cout << "\n";
 }
 void setdata(double)
 {
  cout << "\nenter triangle area one-->" ;  
  cin >> l;
  cout << "enter triangle area two-->" ;  
  cin >> b;
  t=l*b/2;
  cout << t;
  cout << "\n";
 }
 void setdata(int a,int b)
 {
  cout << "\nenter circle area -->" ;
  cin >> r;
  a=20/7*r*r;
  cout << a; 
  cout << "\n";
 }
};
int main ()
{
   area aa;
   aa.setdata();
   aa.setdata(10);
   aa.setdata(1.5);
   aa.setdata(10,12);
}