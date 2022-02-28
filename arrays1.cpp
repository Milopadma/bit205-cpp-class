#include <iostream>
using namespace std;


void printArray(int *ptrArray, int row, int column) //this takes array2d array, row and column parameters for use in for loops
{
    int index = 0;
    for(int i = 0; i < 3; i++)
    {
        std::cout << "[ "; //open brackets, before entering next for loop

        for(int j = 0; j < 2; j++){ // this loop fetches array2d through ptrArray
            std::cout << *(ptrArray + index) << " "; //index here is probably for iterating through the array
            index++;
        }
        
        std::cout << "]" << std::endl; //closes
    }
}


int main()
{
    //declarations
    const int row = 3;
    const int column = 2;
    int array2d[row][column] = {1,2,33,4,5,6};

    //function call to print array
    printArray(*array2d, row, column);
    

    return 0;
}


    // int arr[] = {16, 2, 77 , 40, 12071};
    // int result = 0;
    // for (int i = 0; i < 5; i++){
    //     result += arr[i];
    // }
    // std::cout << result << std::endl;


    // std::cout << "---Holds the multiplication of 1 to 10---" << std::endl;
    // int multiplication[100];

    // for(int i = 0; i < 100; i++)
    // { //normal for loop, stops at 100
    //     multiplication[i] = 10 * i;
    //     std::cout << multiplication[i] << std::endl;
    // }
