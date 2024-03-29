// Write a second ConvertToInches() with two double parameters, numFeet and numInches, 
// that returns the total number of inches.
// Ex: ConvertToInches(4.0, 6.0) returns 54.0 (from 4.0 * 12 + 6.0). 

#include <iostream>
using namespace std;

double ConvertToInches(double numFeet) {
   return numFeet * 12.0;
}

/* Your solution goes here  */
double ConvertToInches(double numFeet, double numInches){
   double total = 0.0;
   total = (numFeet * 12) + numInches;
   return total;
}

int main() {
   double totInches = 0.0;

   totInches = ConvertToInches(4.0, 6.0);
   cout << "4.0, 6.0 yields " << totInches << endl;

   totInches = ConvertToInches(5.9);
   cout << "5.9 yields " << totInches << endl;
   return 0;
}
