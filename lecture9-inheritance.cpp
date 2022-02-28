#include <iostream>
using namespace std;

//inheritance //reusability and maintenance of code 
//basically one class with better recyclable code

//base class
// class Animal{ //class Animal is the base class
//     public:
//     //these class attributes are shared with child members of this class
//         string name; 
//         char foodType;
//         void sound();
//         void sleep();
// };

//     //derived classes
//     class birds : public Animal{ //class birds derives from class Animal
//         public:
//         //these class attributes are unique
//             int wingspan;
//             void fly();
//     };

//         class parrots : public birds{ //multilevel inheritance, this child class inherits from another child class
//             public:
//                 char name;
//         };

//     class mammals : public Animal{
//         public:
//         //these class attributes are unique
//             int limbs;
//             void walk();
//     };


//base classes
class Shape{
    protected: 
        int width, height;
    public:
        //setters
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
};

    //derived classes
    class Rectangle : public Shape{
        public:
            int getArea() { //this method only gets the area of rectangle 
                return (width * height); 
            }
    };

    class Triangle : public Shape{
        public:
            int getArea(){ //this method is only accessible through Triangle
                return ((width*height) / 2);
            }

    };
    
    class Circle : public Shape{
        public:
            int getArea(){
                return (3.14 * width);
            }
    };


int main()
{
    //to call a class method without creating an instance of the class, can only be done if method is of static type
    Rectangle r; //creating an instance of class Rectangle with name of r
    r.setWidth(2);
    r.setHeight(3);
    
    Triangle t;
    t.setHeight(32);
    t.setWidth(41);

    Circle c;
    c.setWidth(120);
    std::cout << "Area of Circle: " << c.getArea() << std::endl;

    //outputs the result of width * height, while class Rectangle uses some parts of its inherited class, which is Shape, this saves time and allows for code repeatability
    std::cout << "Area of rectangle: " << r.getArea() << std::endl;
    std::cout << "Area of triangle: " << t.getArea() << std::endl; /*same method name as in Rectangle child class, 
    but different instance, thus compiler knows which one to use according to the instance name. */

    return 0;
}