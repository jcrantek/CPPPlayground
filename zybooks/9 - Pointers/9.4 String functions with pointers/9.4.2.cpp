// Assign the first instance of The in movieTitle to movieResult. 

#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char movieTitle[100] = "The Lion King";
   char* movieResult = nullptr;

   /* Your solution goes here  */
   
   movieResult = strchr(movieTitle, 'The '); // the trick to this one is to include the space after "The "

   cout << "Movie title contains The? ";
   if (movieResult != nullptr) {
      cout << "Yes." << endl;
   }
   else {
      cout << "No." << endl;
   }

   return 0;
}
