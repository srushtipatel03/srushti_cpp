/*5. Define a class BOOK with the following specifications :

Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies where N
is passed to the function as argument.

Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOK TITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to be paid by the user*/

#include<iostream>
using namespace std;
class BOOK {
  private:
    int BOOK_NO;
    char BOOKTITLE[21];
    float PRICE;

  public:
    float TOTAL_COST(int N) {
      return N * PRICE;
    }

    void INPUT() {
      cout << "Enter Book Number: ";
      cin >> BOOK_NO;
      cout << "Enter Book Title: ";
      cin.ignore();
      cin.getline(BOOKTITLE, 21);
      cout << "Enter Price per Copy: ";
      cin >> PRICE;
    }

    void PURCHASE() {
      int numCopies;
      cout << "Enter the number of copies to be purchased: ";
      cin >> numCopies;
      float totalCost = TOTAL_COST(numCopies);
      cout << "Total cost to be paid: $" << totalCost << endl;
    }
};
int main ()
{
  BOOK cost; // stu is a student class object
    // cost.TOTAL_COST();
     cost.INPUT();
     cost.PURCHASE();

    return 0;


}