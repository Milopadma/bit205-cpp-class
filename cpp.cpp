#include <iostream>

using namespace std; 

int main() 
//type of function --- function name //void means no datatype
{
    int a, b;
    a=b=3;
    cout << "Hello world";
    cout << endl;
    cout << "new line";
    cout << endl;
    printf("does this work?\n");
    return 0;
}



void hitung() // uses void, class does not return any value
{
    int h;
    h=main();
    cout << h;
    cout << "hello from second function";
    cout << endl;

}
