// Gas equation
// An equation used in physics and chemistry that relates pressure, volume, and temperature
// of a gas is PV = nRT. P is the pressure, V the volume, T the temperature, n the number of moles,
// and R a constant. The function below outputs the temperature of a gas given the other values.

#include <iostream>
using namespace std;

const double GAS_CONST = 8.3144621;

/* Your solution goes here  */
double ComputeGasVolume(double press, double temp, double moles){
   // PV = nRT
   double volume = 0.0;
   volume = (moles * GAS_CONST * temp) / press;
   return volume;
}
   

int main() {
   double gasPressure = 0.0;
   double gasMoles = 0.0;
   double gasTemperature = 0.0;
   double gasVolume = 0.0;

   gasPressure = 100;
   gasMoles = 1 ;
   gasTemperature = 273;

   gasVolume = ComputeGasVolume(gasPressure, gasTemperature, gasMoles);
   cout << "Gas volume: " << gasVolume << " m^3" << endl;

   return 0;
}
