#include <iostream>
#include <vector>
using namespace std;

//Write a template function named "rotate_right" that takes a vector as its arguments. The function should shift the contents of each cell one place to the right, except for the contents of the last cell, which should be moved into the cell with subscript 0.
template <class Type>
Type rotate_right(vector<Type> &vector){
    Type temp = vector[vector.size()-1];
    for(int i = vector.size()-1; i > 0; i--){
        vector[i] = vector[i-1];
    }
    vector[0] = temp;
    return vector[0];
}


int main()
{



    return 0;
}