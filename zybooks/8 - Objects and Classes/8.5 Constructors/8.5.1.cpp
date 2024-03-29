// Define a constructor as indicated. Sample output for below program:
// Year: 0, VIN: -1
// Year: 2009, VIN: 444555666

#include <iostream>
using namespace std;

class CarRecord {
   public:
      void   SetYearMade(int originalYear);
      void   SetVehicleIdNum(int vehIdNum);
      void   Print() const;
      CarRecord();  // Default Constructor
   private:
      int    yearMade;
      int    vehicleIdNum;
};

// FIXME: Write constructor, initialize year to 0, vehicle ID num to -1.

/* Your solution goes here  */

   CarRecord::CarRecord() { // Default Constructor 
      yearMade = 0;         // default yearMade
      vehicleIdNum = -1;    // default vehicleIdNum
      
      
      return;
   }


void CarRecord::SetYearMade(int originalYear) {
   yearMade = originalYear;
   return;
}

void CarRecord::SetVehicleIdNum(int vehIdNum) {
   vehicleIdNum = vehIdNum;
   return;
}

void CarRecord::Print() const {
   cout << "Year: " << yearMade << ", VIN: " << vehicleIdNum << endl;
   return;
}

int main() {
   CarRecord familyCar;

   familyCar.Print();
   familyCar.SetYearMade(2009);
   familyCar.SetVehicleIdNum(444555666);
   familyCar.Print();

   return 0;
}
