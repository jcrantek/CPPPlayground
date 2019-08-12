// Array testGrades contains NUM_VALS test scores. 
// Write a for loop that sets sumExtra to the total extra credit received.
// Full credit is 100, so anything over 100 is extra credit. Ex: If testGrades = {101, 83, 107, 90},
// then sumExtra = 8, because 1 + 0 + 7 + 0 is 8. 
// This is the correct solution but does not compile correctly in zybooks. Does not pass 2nd test although the result
// is 0.

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 2;
   int testGrades[NUM_VALS];
   int i = 0;
   int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

   testGrades[0] = 100;
   testGrades[1] = 90;
   // testGrades[2] = 107;
   // testGrades[3] = 90;

   /* Your solution goes here  */
   sumExtra = 0;
   int differences = 0;
   for(i = 0; i <= NUM_VALS; i++){
      if(testGrades[i] > 100){
         //cout << "sumExtra is " << sumExtra << " " << endl;
         //cout << "differences is " << differences << " " << endl;;
         differences = testGrades[i] - 100;
         sumExtra += differences;
      }
 }

   cout << "sumExtra: " << sumExtra << endl;
   return 0;
}
