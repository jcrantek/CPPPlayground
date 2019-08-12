// Assign courseStudent's name with Smith, age with 20, and ID with 9999.
// Use the print member function and a separate cout statement to output courseStudents's data.
// End with a newline. Sample output from the given program:
// Name: Smith, Age: 20, ID: 9999


#include <iostream>
#include <string>
using namespace std;

class PersonData {
public:
   void SetName(string userName) {
      lastName  = userName;
   };
   void SetAge(int numYears) {
      ageYears = numYears;
   };
   // Other parts omitted

   void PrintAll() {
      cout << "Name: " << lastName;
      cout << ", Age: "  << ageYears;
   };

private:
   int    ageYears;
   string lastName;
};

class StudentData: public PersonData {
public:
   void SetID(int studentId) {
      idNum = studentId;
   };
   int GetID() {
      return idNum;
   };

private:
   int idNum;
};

int main() {
   StudentData courseStudent;

   /* Your solution goes here  */
   
   courseStudent.SetName("Smith"); // Assigns lastname for courseStudent via PersonData base class
   courseStudent.SetAge(20);       // Assigns Age for courseStudent via PersonData base class
   courseStudent.SetID(9999);      // Assigns ID for courseStudent via StudentData derived class 
   courseStudent.PrintAll();       // Print function from PersonData base class
   cout<< ", ID: " << courseStudent.GetID() << endl; // Prints ID via GetID function in Student Data derived class

   return 0;
}
