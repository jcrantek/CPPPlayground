// 9.3.2: Allocating memory
// Allocate memory for houseHeight using the new operator. 

#include <iostream>
using namespace std;

int main() {
   double* houseHeight = nullptr;

   /* Your solution goes here  */
   
   houseHeight = new double;  // allocates blank memory space for a new double type named houseHeight

   *houseHeight = 23;         //pointer named houseHeight set to 23
   cout << "houseHeight is " << *houseHeight;

   delete houseHeight;        // deallocates memory space

   return 0;
}
