#include <iostream>
using namespace std;

int main(){
    double mileage1, mileage2, flevel1, flevel2; //in miles, in gallon

    //user input for mileage at start and end of the journey, in miles.
    printf("Input mileage at the start of journey (smaller number): ");
    cin >> mileage1;
    printf("Input mileage at the end of the journey: ");
    cin >> mileage2;


    //user input for the fuel level at the start and end of the journey, in gallons.
    printf("Input fuel level at the start of the journey (larger number): ");
    cin >> flevel1;
    printf("Input fuel level at the end of the journey: ");
    cin >> flevel2;
    cout << "\n";

    //actual number calculations
    double fuelUsed = flevel1 - flevel2; //fuel1 always higher than fuel2
    double milesTravelled = mileage2 - mileage1; //mileage2 always higher than mileage1 
    double fuelComp = milesTravelled / fuelUsed; //in x/MPG

    //conversion to kilometres //convert mileage to kilometres //convert flevel to litres

    const double mileageToKilometers = 1.60934;
    const double gallonsToLitres = 3.78541;

    double kilometres1 = mileage1 * mileageToKilometers;
    double kilometres2 = mileage2 * mileageToKilometers;
    double fuelUsedLitres1 = flevel1 * gallonsToLitres;
    double fuelUsedLitres2 = flevel2 * mileageToKilometers;

    double fuelUsedLitres = fuelUsedLitres1 - fuelUsedLitres2; 
    double kilometresTravelled = kilometres2 - kilometres1; 
    double fuelCompLitres = fuelUsedLitres / 100.0;

    cout << "|| IMPERIAL SYSTEM ||\n";
    cout << "Fuel used: " << fuelUsed << " gallons" <<"\n" << "Miles travelled: " << milesTravelled << " miles" << "\n" << "Fuel consumption: " << fuelComp << "/MPG" << "\n\n";

    cout << "|| METRIC SYSTEM ||\n";
    cout << "Fuel used: " << fuelUsedLitres << " liters" << "\n" << "Kilometers travelled: " << kilometresTravelled << " km" << "\n" << "Fuel consumption: " << fuelCompLitres << " litres/100km" << "\n\n";
    
    system("pause");
return 0;
}