// Assign a pointer to any instance of searchChar in personName to searchResult. 

#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char personName[100] = "Albert Johnson";       // sets char array called personName with 100 character max
   char searchChar = 'J';                         // string variable named searchChar
   char* searchResult = nullptr;                  // initializes searchResult pointer to null

   /* Your solution goes here  */
   
   searchResult = strchr(personName, searchChar); // strchr searches string for parameter searchChar

   if (searchResult != nullptr) {                 // checks if character is in personName
      cout << "Character found." << endl;         // character found
   }
   else {
      cout << "Character not found." << endl;     // character not found
   }

   return 0;
}
