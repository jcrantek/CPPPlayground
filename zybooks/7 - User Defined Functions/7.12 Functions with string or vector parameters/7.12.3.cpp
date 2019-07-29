//The logic of this one gave me a hard time. The parameter for the function and the use of the & also were tricky.
#include <iostream>
#include <vector>
using namespace std;

void SwapVectorEnds(vector<int>& sortV) { //without &, the array can't be modified
   int temp;
   int size = sortV.size();
   
   temp = sortV[0]; //moves 10 to temp
   
   sortV[0] = sortV[size - 1]; //moves first element to last element
   
   sortV[size - 1] = temp; //sets last element to first element
}

int main() {
   vector<int> sortVector(4);
   int i = 0;

   sortVector.at(0) = 10;
   sortVector.at(1) = 20;
   sortVector.at(2) = 30;
   sortVector.at(3) = 40;

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}
