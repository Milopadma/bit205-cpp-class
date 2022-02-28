#include <iostream>
using namespace std;
int main()
{
    int year = 1;
    cout << "---Leap Year Calculator--- (type -1 to exit)" << endl;
    while (year > 0)
    {
        cout << "\nEnter a number; ";
        cin >> year;
        if (year < 1752){
            cout << "no leap years before 1752";
            break;
        }
        if ((year % 400) == 0){
            cout << year <<" is a leap year.";
        }
        else if ((year % 100) == 0){
            cout << year <<" is not a leap year.";
        }
        else if ((year % 4) == 0){
            cout << year <<" is a leap year.";
        }
        else{
            cout << year <<" is not a leap year.";
        }
    }
    
    return 0;


}