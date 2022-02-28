#include <iostream>

using namespace std;
int square(int);
float average(int,int); //function prototypes //early declaration of function so main doesnt freak out when theyre mentioned

int main()
{
    int firstNumber, secondNumber;
    cout << endl;
    cout << "Enter an Integer between 1 and 200: ";
    cin >> firstNumber;
    cout <<"Enter a second integer between 1 and 200: ";
    cin >> secondNumber;
    cout << "The square of " <<firstNumber<< " is " <<square(firstNumber) << "\n";
    cout << "The square of " <<secondNumber << " is " <<square(secondNumber) << "\n\n";
    printf("Square Function Done\n\n");

    int first, second;
    cout << endl;
    cout << "enter an integer: ";
    cin >> first;
    cout << "enter second integer: ";
    cin >> second;
    cout << "the average of " <<first<< " and " <<second<< " is " <<average(first, second) << "\n";
    printf("Average Function Done\n\n");
    system("pause"); //what does this do???
    return 0;

}

int square (int inNumber)
{
    int squaredResult;
    squaredResult = inNumber * inNumber;
    return(squaredResult);

}

float average (int first, int second)
{
    return((first + second) / 2.0);
}