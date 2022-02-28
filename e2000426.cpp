#include <iostream>
using namespace std;
//I GUSTI BAGUS MILO PADMA WIJAYA //e2000426 //this code was compiled using GCC in VSCODE
//C++ LABTEST2

struct materials
{
    string materialType; //can only accept Plastic, Glass or Paper only
    string description;
    int totalPts; //every recyclable material added will have points
    materials *next;
};

typedef materials *materialPtr; //sets struct materials def to materialPtr


class collectorRec{
    private:
        int collectorNumber; 
        string collectorName;
        materialPtr listOfMaterials; //in this class, the materialPtr struct is listOfMaterials linked list
    public:
        //constructor 
        collectorRec();
        collectorRec(string &collectorName){
            static int count = 10001;
            collectorNumber = count;
            listOfMaterials = NULL;
        };

        //setters and getters
        void setCollectorName(string &collectorName);
        int getCollectorNumber();
        string getCollectorName();

        //class methods
        void addMaterial(string &materialType, string &description, int &totalPts);//to add material into list
        void editMaterial(string &materialType);//search for collector record for editing
        friend ostream &operator<< (ostream &os, const collectorRec& cR);

        //class destructor 
        ~collectorRec();
};




int main()
{
    //creating object of class collectorRec
    collectorRec cRec;

    //main function variables
    int choice;
    string name;

    //just a menu system
    std::cout << "---Garbage Collecting Program---" << std::endl;
    while (true)
    {
            std::cout << "\n---MENU--- (Any other number to exit...)" << std::endl;
            std::cout << "1. Create new collector" << std::endl;
            std::cout << "2. Add recyclable material" << std::endl;
            std::cout << "3. Edit recyclable material" << std::endl;
            std::cout << "4. Display All recyclable material" << std::endl;    
            cin >> choice;
            switch (choice)
            {
            case 1:
                std::cout << "What will your collector name be? " << std::endl;
                cin >> name;
                cRec.setCollectorName(name); 
                break;
            case 2:
                /* code */
                break;
            case 3:
                /* code */
                break;
            case 4:
                cout << cRec;
                break;            
            default:
            //user input of anything other than these numbers will result in program exit
            std::cout << "Exiting program..." << std::endl;
            return 0;
                break;
            }
    }
    return 0;
}

//CLASS COLLECTORREC METHOD DECLARATIONS
collectorRec::collectorRec(){
    //initialization of constructor
};

//setter method declarations
void collectorRec::setCollectorName(string &collectorName){
    collectorName = collectorName;
};

//getter methods declarations
int collectorRec::getCollectorNumber(){
    return collectorNumber;
};
string collectorRec::getCollectorName(){
    return collectorName;
};

//class method declarations
void collectorRec::addMaterial(string &materialType, string &description, int &totalPts){
    //need to validate if material is plastic glass or papers


};

void collectorRec::editMaterial(string &materialType){
    //search collector record for edit


};

//for the friend operator >> 
ostream &operator<< (ostream &os, const collectorRec& cR){
    os << cR.collectorName << " " << cR.collectorNumber << " " << cR.listOfMaterials;
    return os;
};

//refers to destructor 
collectorRec::~collectorRec(){delete[] &collectorName;};






//I GUSTI BAGUS MILO PADMA WIJAYA //e2000426 //this code was compiled using GCC in VSCODE