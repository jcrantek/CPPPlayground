#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int userValues[NUM_VALS];
   int i = 0;
   int matchValue = 0;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   userValues[0] = 2;
   userValues[1] = 2;
   userValues[2] = 1;
   userValues[3] = 2;

   matchValue = 2;

   /* Your solution goes here  */
   
   numMatches = 0; // set numMatches to zero before start otherwise it will pull -99
   for (i = 0; i < NUM_VALS; i++){ // iterate 4 times through array using NUM_VALS which is 4
      if(userValues[i] == matchValue){ // compares 2 against each array element, 2 v 2, 2 v 2, 2 v 1, 2 v 2
         numMatches++; // if a match is found numMatches increments 1 - 0, 1, 2, 3
      }
   }

   cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;

   return 0;
}
