/*2. Define a class batsman with the following specifications:

Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula –
batavg =runs/(innings-notout)
calcavg() Function to compute batavg

Public members:
readdata() Function to accept value from bcode, name, innings, notout and
invoke the function
calcavg() to calculate.
displaydata() Function to display the data members on the screen*/

#include<iostream>
using namespace std;
class  batsman{
    int bcode,innings,notout,runs;
    char bname [20];
    float batavg;
    
    float calcavg() 
 {
    return batavg=runs/(innings-notout);

 }  

 public:
 void readdata(){
 cout << "Enter batsman 4 Digit Code Number. : ";
 cin >> bcode;
 cout << "Enter Batsman name. : ";
 cin >> bname   ;
 cout << "Enter Batsman innings : ";
 cin >> innings;
 cout << "Enter Batsman notout : ";
 cin >>  notout;
 cout << "Enter Batsman runs : ";
 cin >> runs ;
batavg = calcavg() ;
}

void displaydata()
{
    cout << "\nBatsman 4 Digit Code Number Is : " << bcode;
    cout << "\nBatsman Batsman is : " << bname;
    cout << "\ninnings\t notout\truns \tbatavg";
    cout << "\n" << innings << "\t" <<  notout << "\t" << runs  << "\t" << batavg;
}
};

int main ()
{
   batsman bat; // bat is a batsman class object
     bat.readdata();
     bat.displaydata() ;
    return 0;
}

/*
Enter Batsman 4 Digit Code Number. : 1234
Enter Batsman name. : virat
Enter Batsman innings : 350
Enter Batsman notout : 19
Enter Batsman runs : 20598

output:--

Batsman 4 Digit Code Number Is : 1234
Batsman Batsman is : virat
innings  notout runs    batavg        
350     19      20598   62
*/