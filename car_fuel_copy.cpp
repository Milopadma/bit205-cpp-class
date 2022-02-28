#include <iostream>
using namespace std;

int main(){
    double mileage1, mileage2, flevel1, flevel2; 
    cout << "mileage  start of journey - ";
    cin >> mileage1;
    cout << "mileage at end of the journey - ";
    cin >> mileage2;

    cout << "fuel level at  start of the journey- ";
    cin >> flevel1;
    cout << "fuel level at end of the journey- ";
    cin >> flevel2;

    double fuelUsed = flevel1 - flevel2; 
    double milesTravelled = mileage2 - mileage1; 
    double fuelComp = milesTravelled / fuelUsed; 

    const double mileageKilometers = 1.60934;
    const double gallonsLitres = 3.78541;

    double kilometres1 = mileage1 * mileageKilometers;
    double kilometres2 = mileage2 * mileageKilometers;
    double fuelUsedLitres1 = flevel1 * gallonsLitres;
    double fuelUsedLitres2 = flevel2 * mileageKilometers;

    double fuelUsedLitres = fuelUsedLitres1 - fuelUsedLitres2; 
    double kilometresTravelled = kilometres2 - kilometres1; 
    double fuelCompLitres = fuelUsedLitres / 100.0;

    cout << "fuel used: " << fuelUsed << " gallons" <<"\n" << "miles travelled: " << milesTravelled << " miles" << "\n" << "fuel consumption: " << fuelComp << "/MPG" << "\n\n";
    cout << "fuel used: " << fuelUsedLitres << " liters" << "\n" << "kilometers travelled: " << kilometresTravelled << " km" << "\n" << "fuel consumption: " << fuelCompLitres << " litres/100km" << "\n\n";
return 0;
}