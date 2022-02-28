#include <iostream>
using namespace std;

int main()
{
    int bioMark, phyMark, chemMark, averageMark;
    int passCount = 0;
    char grade;
    cout << "----Exam Check----" << endl;
    cout << "Enter your biology mark; ";
    cin >> bioMark;
    cout << "Enter your physics mark; ";
    cin >> phyMark;
    cout << "Enter your chemistry mark; ";
    cin >> chemMark;
    averageMark = (bioMark + phyMark + chemMark)/3;

    //basic check
        if (bioMark >= 40) //minimum pass for each is above 40
        {
            passCount = passCount + 1;
        } 

        if (phyMark >= 40)
        {
            passCount = passCount + 1;
        } 

        if (chemMark >= 40)
        {
            passCount++;
        }

        if(averageMark > 80){ grade = 'A';}
        else if(averageMark > 70){ grade = 'B';}
        else if(averageMark > 60){ grade = 'C';}
        else if(averageMark > 50){ grade = 'D';}
        else if(averageMark > 40){ grade = 'E';}
        else{ grade = 'F';}

        if (passCount >= 2 && averageMark >= 50 ) //if atleast 2 passed, AND averageMark is above 50
        {
            cout << "Passed with " << passCount << " subjects passed." <<endl;
            cout << "Average mark is " << averageMark << " with grade of "<< grade << "." << endl;
        }
        else{
            cout << "Failed" << endl; // only runs when all marks below 40
        }

    return 0;
}