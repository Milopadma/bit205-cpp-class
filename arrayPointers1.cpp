#include <iostream>
using namespace std;

int calcLength(char *inName);

int main()
{
    char name[10] = "Program";
    cout << calcLength(name) << endl;

    return 0;
}

int calcLength(char *inName)
{
    for(int index = 0; *(inName + index) != '\0'; index++)
    {
        return index;
    }
}