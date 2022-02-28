#include <iostream>
using namespace std;

//declaring global variables
int count = 3;

struct entry {
    string first;
    string last;
    string dorm;
    int phone;
};

entry data[2];

bool equalEntry(); //takes two entries and compares them together.
void comesFirst();


int main()
{
    string first, last, dorm;
    int phone;
    std::cout << "-- Data Comparison --" << std::endl;

    //loop, keeps asking user to enter data until count is met.
    for (int index = 0; index < count; index++)
    {
        std::cout << "Enter first name;" << std::endl;
        cin >> data[index].first;
        std::cout << "Enter last name;" << std::endl;
        cin >> data[index].last;
        std::cout << "Enter dorm name;" << std::endl;
        cin >> data[index].dorm;
        std::cout << "Enter phone number;" << std::endl;
        cin >> data[index].phone;
    }
    //after loop done, data should be saved in struct.
        //calling functions to instantly display processed data.
        bool equal = equalEntry();
        comesFirst();


    return 0;
}

// bool equalEntry()
// {
//     //pass 2 first + last name pairs here, and if theyre both equal, return true. if not identical, return false.
// }


void comesFirst()
{
    // 
}