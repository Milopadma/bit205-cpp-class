#include <iostream>
using namespace std;

int input1;
float input2;
int input3;

    //declaring struct (Unlike class, structs in C++ are value type than reference type. It is useful if you have data that is not intended to be modified after creation of struct.)
    struct data
    {
        //member declarations
        int x;
        float y;
        int z[6];
    };

int main()
{
    struct data d; //calling struct data and applying ~d~ callsign to it, essentially creating an instance of struct, in main
    std::cout << "Input data 1 2 3" << std::endl;
    cin >> input1 >> input2 >> input3;
    d.x = input1;
    d.y = input2;

    d.z[0] = 00;
    d.z[1] = input3;
    d.z[2] = 22;
    d.z[3] = 33;
    d.z[4] = 44;
    d.z[5] = 55;

    printf("\nData 1 is %d, \nData 2 is %.2f, \nData 3 is %d\n", d.x, d.y, d.z[1] );
    for (int index = 0; index < 6; index++)
    {
        printf("z[%d] adalah: %d\n", index, d.z[index]); //for loops always has a dynamic (i)ndex/(i)teration part to it
    }
    
    string texts[] = {"Apple", "Banana"};
    for(const string& text : texts)
    {
        std::cout << text << std::endl;
    }

    return 0;
}