// Define the missing member function. Use "this" to distinguish the local member from the parameter name. 


#include <iostream>
using namespace std;

class CablePlan{
   public:
      void  SetNumDays(int numDays);
      int   GetNumDays() const;
   private:
      int   numDays;
};

// FIXME: Define SetNumDays() member function, using "this" implicit parameter.
void CablePlan::SetNumDays(int numDays) {

   /* Your solution goes here  */
   this->numDays = numDays;  // set SetNumDays()::numDays = numDays

   return;
}

int CablePlan::GetNumDays() const {
   return numDays;
}

int main() {
   CablePlan house1Plan;

   house1Plan.SetNumDays(30);
   cout << house1Plan.GetNumDays() << endl;

   return 0;
}
