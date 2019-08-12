// Write a loop that sets each array element to the sum of itself and the next element, 
// except for the last element which stays the same. Be careful not to index beyond the last element.

// Ex: 
// Initial scores:        10, 20, 30, 40
// Scores after the loop: 30, 50, 70, 40

// The first element is 30 or 10 + 20, the second element is 50 or 20 + 30, 
// and the third element is 70 or 30 + 40. The last element remains the same. 

#include <iostream>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   int bonusScores[SCORES_SIZE];
   int i = 0;

   bonusScores[0] = 10;
   bonusScores[1] = 20;
   bonusScores[2] = 30;
   bonusScores[3] = 40;

   /* Your solution goes here  */
      
   for(i = 0; i < SCORES_SIZE - 1; i++){    // iterate through all but last elements in bonusScores array
      bonusScores[i] += bonusScores[i + 1]; // add bonusScores element to each element + 1 (0 + 1, 1 + 2, 2 + 3, etc.)
   }

   for (i = 0; i < SCORES_SIZE; ++i) {
      cout << bonusScores[i] << " ";
   }
   cout << endl;

   return 0;
}
