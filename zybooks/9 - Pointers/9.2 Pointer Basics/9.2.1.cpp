// 9.2.1 Printing with Pointers
// Assign numItems' address to numItemsPtr, then print the shown text followed by
// the value to which numItemsPtr points. End with newline.
// Items: 99

#include <iostream>
using namespace std;

int main() {
   int* numItemsPtr = nullptr;
   int numItems = 99;

   /* Your solution goes here  */
   
   numItemsPtr = &numItems; // assign numItemsPtr to address of numItems
   cout << "Items: " << *numItemsPtr << endl; // *numItemsPtr points to value of 99

   return 0;
}
