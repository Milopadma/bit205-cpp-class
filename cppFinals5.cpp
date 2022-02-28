#include <iostream>
#include <vector>
using namespace std;

class onlineGame{
    //class attributes
    private:
        string gameName;
        double subscriptionFee;

    protected:
        //setters
        void setGameName(string ugameName){gameName = ugameName;}
        void setSubscriptionFee(double usubscriptionFee){subscriptionFee = usubscriptionFee;}
    
    public:
        //getters
        string getGameName(){return gameName;}
        double getSubscriptionFee(){return subscriptionFee;}
        //class constructor
        onlineGame(string ugameName, double usubscriptionFee);
        //Overloading the friend operator ==
        friend bool operator==(const onlineGame& obj1, const onlineGame& obj2);


};


//class constructor definiton
onlineGame::onlineGame(string ugameName, double usubscriptionFee){
    gameName = ugameName;
    subscriptionFee = usubscriptionFee;
}

//class overloading friend operator definitions 
bool operator==(const onlineGame& obj1, const onlineGame& obj2){
    if(obj1.gameName == obj2.gameName && obj1.subscriptionFee == obj2.subscriptionFee){
        return true;
    }
    else{
        return false;
    }
}


////////////////////////////////////
class customerInfo
{
        //class attributes
    private:
        string customerName;
        static int autoNum;
        int customerID; // this is assigned with autoNum static var 
        int gamesPoint; //this attribute accumulates points for every game purchased
        vector<onlineGame> listOfGames;
    public:
        //class constructor
        customerInfo(string ucustomerName);
        //getters
        string getCustomerName(){return customerName;}
        int getCustomerID(){return customerID;}

        //setters
    protected:
        void setCustomerName(string ucustomerName){customerName = ucustomerName;}
        void setCustomerID(int ucustomerID){customerID = ucustomerID;}

        //class methods
    public:
        void addGame(string ugameName, string ugamePurchased);
        void printGame();
};
//class method definitions
//class constructor
customerInfo::customerInfo(string ucustomerName){
    setCustomerName(ucustomerName);
    autoNum = 102200; //autoNum initialized to 102200
    setCustomerID(autoNum); //setCustomerID to autoNum
    autoNum++; //autoNum is incrremeted by 1
    gamesPoint = 0;
}

//addGame method definitions
void customerInfo::addGame(string ugameName, string ugamePurchased){
    onlineGame newGame(ugameName, 0); //create a new onlineGame object in this scope
    listOfGames.push_back(newGame); //add the newGame object to the listOfGames vector
    if(ugamePurchased == "yes"){ //if the game was purchased
        gamesPoint = gamesPoint + (newGame.getSubscriptionFee() / 50); //1 point accumulated for every RM 50 spent in the subscriptionFee
    }
}

void customerInfo::printGame(){
    int totalPrice = 0;
    cout << "Customer name: " << getCustomerName(); //display customer name
    for(vector<onlineGame>::iterator it = listOfGames.begin(); it != listOfGames.end(); it++){ //an iterator to loop througb the listOfGames vector
        cout << "Game name: " << (*it).getGameName(); //display game name
        cout << "Game price: " << (*it).getSubscriptionFee(); //display game subscriptionFee
        totalPrice = totalPrice + (*it).getSubscriptionFee(); //get the total price of the games purchased
    }
    cout << "Total Price: " << totalPrice << endl; //display total price
    cout << "Total Points: " << gamesPoint << endl; //display total points
}





int main()
{



    return 0;
}