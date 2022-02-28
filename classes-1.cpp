#include <iostream>
using namespace std;


class House {
        //initialization of method prototypes
    public:
        House(int n, int tW, string cc, string mat){ //constructor
            number = n;
            totalWalls = tW;
            colourCode = cc;
            material = mat;
        };
        void setHouse(int& n, int& tW, string& cc, string& mat);
        void getHouse(int&, int&, string&, string&);
        void showHouse();
        int number;
        int totalWalls;
        string colourCode;
        string material;
        
};


int main()
{
    //object creation from class
    House myHouse(1, 4, "white", "wood");
    // myHouse.number = 1;
    // myHouse.totalWalls = 4;
    // myHouse.colourCode = "white";
    // myHouse.material = "wood"; 

    House myHouse2(2, 6, "red", "marble");
    // myHouse2.number = 2;
    // myHouse2.totalWalls = 6;
    // myHouse2.colourCode = "red";
    // myHouse2.material = "marble"; 

    std::cout << "This house " << myHouse.number << " has total walls of " << myHouse.totalWalls << " with a colour code of " << myHouse.colourCode << " and a main material of " << myHouse.material << "." << std::endl;
    std::cout << "This house " << myHouse2.number << " has total walls of " << myHouse2.totalWalls << " with a colour code of " << myHouse2.colourCode << " and a main material of " << myHouse2.material << "." << std::endl;

    return 0;
}


    void House::setHouse(int& n, int& tW, string& cc, string& mat){
        number = n;
        totalWalls = tW;
        colourCode = cc;
        material = mat;
    }

    void House::getHouse(int& n, int& tW, string& cc, string& mat){
        n = number;
        tW = totalWalls;
        cc = colourCode;
        mat = material;
    }

    void House::showHouse(){
        std::cout << number << totalWalls << colourCode << material << std::endl;
    }







    