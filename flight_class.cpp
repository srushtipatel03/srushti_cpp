/*4. Define a class in C++ with following description:

Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
Distance Fuel
<=1000 500
more than 1000 and <=2000 1100
more than 2000 2200

Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members*/

#include <iostream>
#include <string>
using namespace std;

class Flight {
    int FlightNumber;
    string Destination;
    float Distance;
    float Fuel;
   void calfuel()
    {
      if(Distance<=1000)
      {
       Fuel=500;
      } else
      if(1000<=Distance<=2000)
      {
        Fuel=1100;
      } else
      if(Distance>=2000)
      {
        Fuel=2200;
      }
    }
    public:
      void feedinfo(){
        cout << "enter the FlightNumber : ";
        cin >> FlightNumber;
        cout << "enter the Destination : ";
        cin >> Destination;
        cout << "enter the Distance : ";
        cin >> Distance;
        cout << "enter the Fuel : ";
        cin >> Fuel;
        calfuel();
      }

      void showinfo()
      {
        cout << "\n FlightNumber is: " << FlightNumber;
        cout << "\n Destination is: " << Destination;
        cout << "\n Distance is: " << Distance;
        cout << "\n Fuel is: " << Fuel;

      }
};

       int main()
       {
        Flight f;
        f.feedinfo();
        f.showinfo();
        return 0;
       }