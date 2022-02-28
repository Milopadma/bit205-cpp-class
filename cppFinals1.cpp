#include <iostream>
using namespace std;
int main()
{

    double billingAmount, desiredPayment;
    cout << "Enter the amount of the bill: ";
    cin >> billingAmount;
    cout << "Enter the amount of the desired payment: ";
    cin >> desiredPayment;
    if (billingAmount == desiredPayment)
    {
        if (billingAmount*0.02 < 10)
        {
            cout << "RM "<< billingAmount*0.02 << " credited for your next bill." << endl;
        }
        else 
        {
            cout << "RM 10 credited for your next bill.";
        }
    }
    else if (billingAmount/2 <= desiredPayment)
    {
        cout << "Penalty of 5% on remaining unpaid amount." << endl;
    }
    else //if user did not pay in full, or less than 50%
    {
        cout << "Penalty is 15% for remaining amount." << endl;
    }



    return 0;
}