// Write code that uses the input string stream inSS to read input data from string 
// userInput, and updates variables userMonth, userDate, and userYear. Sample output if userinput is "Jan 12 1992":
// Month: Jan
// Date: 12
// Year: 1992

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   string userInput = "Jan 12 1992";
   istringstream inSS(userInput);
   string userMonth;
   int userDate = 0;
   int userYear = 0;

   /* Your solution goes here  */
   
   // Get user input
   cin >> userMonth;
   cin >> userDate;
   cin >> userYear;
   
   // Entire line into lineString
   getline(cin, userInput);
      
   // Copies to inSS's string buffer
   inSS.clear();
   inSS.str(userInput);
      
   // Now process the userInput line
   inSS >> userMonth;
   inSS >> userDate;
   inSS >> userYear;

   cout << "Month: " << userMonth << endl
        << "Date: " << userDate << endl
        << "Year: " << userYear << endl;

   return 0;
}
