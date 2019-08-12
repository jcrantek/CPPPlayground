// Write a for loop to print all NUM_VALS elements of array hourlyTemp.
// Separate elements with a comma and space. 
// Ex: If hourlyTemp = {90, 92, 94, 95}, print: 90, 92, 94, 95
// Note that the last element is not followed by a comma, space, or newline. 

#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i = 0;

   hourlyTemp[0] = 90;
   hourlyTemp[1] = 92;
   hourlyTemp[2] = 94;
   hourlyTemp[3] = 95;

   /* Your solution goes here  */
   for(i = 0; i < NUM_VALS - 1; i++){  // iterate through elements except for last element in array
      cout << hourlyTemp[i] << ", ";   // output all but last elements in an array with a space and comma
   }
   cout << hourlyTemp[NUM_VALS - 1];   // outputs final element of array using NUM_VALS instead of i which is the value of element
   cout << endl;                       // endline

   return 0;
}
