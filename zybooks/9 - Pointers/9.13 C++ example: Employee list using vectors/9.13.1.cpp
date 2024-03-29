#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Add an employee
void AddEmployee(vector<string> &name, vector<string> &department, 
                 vector<string> &title) {
   string theName  = "";
   string theDept  = "";
   string theTitle = "";

   cout << endl << "Enter the name to add: " << endl;
   getline(cin, theName);
   cout << "Enter " << theName << "'s department: " << endl;
   getline(cin, theDept);
   cout << "Enter " << theName << "'s title: " << endl;
   getline(cin, theTitle);

   name.push_back(theName);
   department.push_back(theDept);
   title.push_back(theTitle);

   cout << theName << "'s information has been added." << endl;
   
   return;
}

// Added this section to complete program
// Delete an employee

void DeleteEmployee(vector<string> &name, vector<string> &department, // create fucntion that stores 3 vectors - name, director
                    vector<string> &title) {                          // and title
   int nElements = 0; // initialize number of elements for moving through vectors
   int element   = 0; // initialize variable for user input of deleted employee

   nElements = name.size(); // set nElements to the size of the name vector
   if (nElements > 0) {     // checks to make sure name.size() is not empty
      cout << "Enter entry # to delete (0-" << (nElements - 1) << // print for user
              ", or -1 to skip deletion: ";
      cin >> element;       // takes in variable from user for corresponding employee to delete
      if (element >= 0) {   // checks to make sure element isn't negative
         name.erase(name.begin() + element);              // erases name using 0 + element
         department.erase(department.begin() + element);  // erases department using 0 + element
         title.erase(title.begin() + element);            // erases title using 0 + element
         cout << "Entry #" << element << " deleted." << endl;  // output of which employee was deleted
      }
   }
   else {
      cout << endl << "There are no entries to delete." << endl; // if name.size is 0 then no employees to delete
   }

   return;
}

// List all employees
void ListEmployees(vector<string> &name, vector<string> &department, 
                   vector<string> &title) {
   int nElements = 0;
   int i = 0;

   nElements = name.size();
   if (nElements > 0) {
      cout << endl;
      for (i = 0; i < nElements; ++i) {
         cout << i << ") Name: " << name.at(i) <<
                      ",\tDepartment: " << department.at(i) <<
                      ",\tTitle: " << title.at(i) << endl;
      }
   }
   else {
      cout << endl << "There are no employees to list." << endl;
   }
   return;
}

// Get the action the user wants to perform
char GetAction(string prompt) {
   string answer = "";
   char firstChar = '?';

   cout << endl << prompt << endl;
   getline(cin, answer);
   while(answer.length() == 0) {
      getline(cin, answer);
   }
   firstChar = toupper(answer[0]);

   return firstChar;
}

int main() {
   const char EXIT_CODE = 'X';
   const string PROMPT_ACTION = "Add, Delete, List or eXit (a,d,l,x): ";

   vector<string> name(0);
   vector<string> department(0);
   vector<string> title(0);

   char userAction = '?';

   // Loop until the user enters the exit code.
   userAction = GetAction(PROMPT_ACTION);

   while (userAction != EXIT_CODE) {
      switch(userAction) {
         case 'A': AddEmployee(name, department, title);
                   break;
         case 'D': DeleteEmployee(name, department, title);
                   break;
         case 'L': ListEmployees(name, department, title);
                   break;
         default : // Do nothing
                   break;
      }

      userAction = GetAction(PROMPT_ACTION);
   }

   return 0;
}
