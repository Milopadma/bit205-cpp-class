#include <iostream>
using namespace std;

//templates
//basically one class/function, many datatypes. //a way for classes and functions to have better flexibility according to perimeter datatypes

//function overloading //compile time polymorphism
    int add(int x, int y){return x+y;}
    float add(float x, float y){return x+y;}
    double add(double x, double y){return x+y;}
//all have same name, but different return datatypes, compiler will decide which one to use, thus compile time polymorphism



//function templates, the basis is the same as function overloading but with more usability and repetition, as only need to really code it once
    template <typename Type>
    Type add(Type x, Type y){return x+y;}

    template <typename Type1, typename Type2>
    Type2 addition2(Type1 x, Type2 y){return x+y;}


//class templates, same as a normal class, but with more flexibility in datatypes
    template <typename TC1, typename TC2>
    class Weight{ // a normal class, just uses custom template datatypes from line above
        private:
        TC1 kg;
        int grams;

        public:
            void setData(TC1 x){ //sets parameter x to kg of TC1 typename
                kg = x;
            }
            TC1 getData(){return kg;} //think TC1 here as a placeholder datatype, can be set to any datatype according to object call
    };



int main()
{
    //function overloading
    std::cout << add(5, 4) << std::endl;
    std::cout << add(2.5f, 2.5f) << std::endl;
    std::cout << add(1.22, 22.22) << "\n" << std::endl;

    //function templates
    std::cout << add<int>(5, 5) << std::endl;
    std::cout << add<float>(5.3, 5.2) << std::endl;
    std::cout << add<double>(2.33, 5.33) << "\n" << std::endl;


    //multiple datatype function templates
    std::cout << addition2<int, double>(2, 2.2) << "\n" << std::endl;

        //--------------------------------------------------------------------//

    //class templates, creating object from class
    Weight<int, int>object[1];
    object[1].setData(5);
    std::cout << "Value is " << object[1].getData() << std::endl;

    //2 objects, 2 differnet data types, from 1 same class
    Weight<double, int>object2;
    object2.setData(5.2122);
    std::cout << "Value is " << object2.getData() << std::endl;

    Weight<int, double>object3;
    object3.setData(2.333);
    std::cout << "Value is " << object3.getData() << std::endl;

    return 0;
}

