// Write a function NumberOfPennies() that returns the total number of 
// pennies given a number of dollars and (optionally) a number of pennies.
// Ex: 5 dollars and 6 pennies returns 506. 

#include <iostream>
using namespace std;

int NumberOfPennies(int numDollars, int numPennies = 0){ // must set 2nd parameter to 0 to make it optional
   int total = 0;
   total = (numDollars * 100) + numPennies; // conversion
   return total; // must return something to function calls below
}

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}
