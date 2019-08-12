// Write the PrintItem() function for the base class. Sample output for below program:
// Last name: Smith
// First and last name: Bill Jones

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BaseItem {
public:
   void SetLastName(string providedName) {
      lastName = providedName;
   };

   // FIXME: Define PrintItem() member function

   /* Your solution goes here  */
   virtual void PrintItem(){                  // virtual tells compiler what to point to for this function
   cout << “Last name: ” << lastName << endl; // format output
   }

protected:
   string lastName;
};

class DerivedItem : public BaseItem {
public:
   void SetFirstName(string providedName) {
      firstName = providedName;
   };

   void PrintItem() {
      cout << "First and last name: ";
      cout << firstName << " " << lastName << endl;
   };

private:
   string firstName;
};

int main() {
   BaseItem*    baseItemPtr    = nullptr;
   DerivedItem* derivedItemPtr = nullptr;
   vector<BaseItem*> itemList;
   int i = 0;

   baseItemPtr = new BaseItem();
   baseItemPtr->SetLastName("Smith");

   derivedItemPtr = new DerivedItem();
   derivedItemPtr->SetLastName("Jones");
   derivedItemPtr->SetFirstName("Bill");

   itemList.push_back(baseItemPtr);
   itemList.push_back(derivedItemPtr);

   for (i = 0; i < itemList.size(); ++i) {
      itemList.at(i)->PrintItem();
   }

   return 0;
}
