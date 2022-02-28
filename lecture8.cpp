#include <iostream>
using namespace std;


//copy constructors and destructors
class Data {
private:
    int x;
    int y;
public:
    //normal constructor
    Data(int x1, int y1){x = x1; y = y1;}

    // user defined copy constructor// without this, c++ uses default copy constructor, creating a 'shallow copy', instead of creating new copy with new memory allocation
    Data(const Data &p1){x = p1.x; y = p1.y;}

    //class methods
    int getX(){return x;}
    int getY(){return y;}

    ~Data(); //destructor, used to free up memory
};

//refers to destructor
Data::~Data(){ delete[] &x, &y;}


class stat1c{
    public:
    stat1c(){std::cout << "stat1c's constructor called" << std::endl;}
};


//operator overloading //part of polymorphism
class complex {
private:
    int first; 
    int second; 
    friend class Data; //friend class, now Data can access complex class private members
    friend int Data::getY(); //friend function, now Data can access internal members of function getY from class Data
public:
    complex(int l = 0, int r = 0){first = l; second = r;}
    static stat1c stat; //static data member of data

    //this is called when '+' is used between two complex class objects
    complex operator + (complex const &object){ //uses + operator to add two objects together
        complex result;
        result.first = first + object.first; //this adds first to first, and second to second, respectively
        result.second = second + object.second;
        return result; 
        //as in both c1 and c2, their 'positions' are the same, thus this works
    }
    void print(){std::cout << "The addition of the first number parameter is "<< first << " and result of second number parameter addition is " << second << std::endl;} //outputs the result

    static stat1c getA(){return stat;} //static member function
};

//defining outside the class using scope resolution operator
stat1c complex::stat;


int main()
{
    Data p1(10, 15); //this is a normal constructor being called
    Data p2 = p1; //this is a copy constructor being called as it assigns data from p1 to p2

    std::cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << std::endl; // this is from the normal constructor
    std::cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << std::endl; // this is from the copy constructor


    //operator overloading 
    complex c1(10, 5); //creating class objects and passing parameters into it
    complex c2(10, 5);
    complex c3 = c1 + c2; //uses the + operator to 'add' both class objects together
    c3.print(); //accesses class member function of 'complex' class

    //static data members
    stat1c a = complex::getA();


    return 0;
}

