// Complete the second PrintSalutation function to print the following given
// personName "Holly" and customSalutation "Welcome":
// Welcome, Holly

#include <iostream>
#include <string>
using namespace std;

void PrintSalutation(string personName) {
   cout << "Hello, " << personName << endl;
   return;
}

// Define void  PrintSalutation(string personName, string customSalutation)...

void PrintSalutation(string personName, string customSalutation){
   cout << customSalutation << ", " << personName << endl;
   return;
}

int main() {
   PrintSalutation("Holly", "Welcome");
   PrintSalutation("Sanjiv");

   return 0;
}
