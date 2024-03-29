// Define a member function PrintAll() for class PetData that prints output as follows.
// Hint: Make use of the base class' PrintAll() function.
// Name: Fluffy, Age: 5, ID: 4444

#include <iostream>
#include <string>
using namespace std;

class AnimalData {
public:
   void SetName(string givenName) {
      fullName = givenName;
   };
   void SetAge(int numYears) {
      ageYears = numYears;
   };
   // Other parts omitted

   void PrintAll() {
      cout << "Name: "  << fullName;
      cout << ", Age: " << ageYears;
   };

private:
   int    ageYears;
   string fullName;
};

class PetData: public AnimalData {
public:
   void SetID(int petID) {
      idNum = petID;
   };

   // FIXME: Add PrintAll() member function

   /* Your solution goes here  */
   void PrintAll() {
      AnimalData::PrintAll();           // calls baseclass (AnimalData) to use it's PrintAll function
      cout << ", " << "ID: " << idNum;  // formats ID at the end of Name and Age
   };

private:
   int idNum;
};

int main() {
   PetData userPet;

   userPet.SetName("Fluffy");
   userPet.SetAge (5);
   userPet.SetID  (4444);
   userPet.PrintAll();
   cout << endl;

   return 0;
}
