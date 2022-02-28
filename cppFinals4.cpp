#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


class TrainingSession{
public:
//constructor
    virtual void foo(){};
    TrainingSession();
    TrainingSession(string utitle, string udate, string utime, double ufee);
//class variables
    string title;
    string date;
    string time;
    double fee;
    string status;
//setters
    void setTitle(string utitle){title = utitle;}
    void setDate(string udate){date = udate;}
    void setTime(string utime){time = utime;}
    void setFee(double ufee){fee = ufee;}
//getters
    string getTitle(){return title;}
    string getDate(){return date;}
    string getTime(){return time;}
    double getFee(){return fee;}
//class methods
    void printTrainingDetails();
};

//parameter constructor definition
TrainingSession::TrainingSession(){}
TrainingSession::TrainingSession(string utitle, string udate, string utime, double ufee){
    title = utitle;
    date = udate;
    time = utime;
    fee = ufee;
    status = "available";
}

//method definition
void TrainingSession::printTrainingDetails(){
    cout << "Title: " << title << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Fee: " << fee << endl;
    cout << "Status: " << status << endl;
}


////////////////////////////////////////////////////////////////
class GroupTraining : virtual public TrainingSession{
public:
//class variables
    string type; 
    int maxPax;
//parameter constructor to initialize type, maxPax and attributes inherited by TrainingSession.
    GroupTraining();
    GroupTraining(string utitle, string udate, string utime, double ufee, string utype, int umaxPax);
//setters
    void setType(string utype){type = utype;}
    void setMaxPax(int umaxPax){maxPax = umaxPax;}
//getters
    string getType(){return type;}
    int getMaxPax(){return maxPax;}
//class methods
    void printTrainingDetails();
};

//parameter constructor definition
GroupTraining::GroupTraining(string utitle, string udate, string utime, double ufee, string utype, int umaxPax){
    title = utitle;
    date = udate;
    time = utime;
    fee = ufee;
    type = utype;
    maxPax = umaxPax;
}

//class method definition
void GroupTraining::printTrainingDetails(){
    cout << "Title: " << title << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Fee: " << fee << endl;
    cout << "Type: " << type << endl;
    cout << "Max Participants: " << maxPax << endl << endl;
}




int main()
{
    vector<TrainingSession *> groupTrVec;
    TrainingSession *groupTrObj1;
    TrainingSession *groupTrObj2;

    //segment a
    groupTrObj1 = new GroupTraining("Hoola Hoop", "01-02-2022", "09:00", 250.00, "Dance", 15);

    //segment b
    groupTrObj2 = new GroupTraining("Bollywood", "30-01-2022", "09:00", 250.00, "Dance", 15);

    //segment c
    groupTrVec.push_back(groupTrObj1);
    groupTrVec.push_back(groupTrObj2);

    //segment d
    for (int i = 0; i < groupTrVec.size(); i++){
        GroupTraining *GroupTrainingObj = dynamic_cast<GroupTraining *>(groupTrVec[i]);
        if (GroupTrainingObj != NULL){
            GroupTrainingObj->printTrainingDetails();
        }
    }
    
    //segment e
    ofstream danceFile;
    danceFile.open("danceFile.txt");
    GroupTraining *GroupTrainingObj1 = dynamic_cast<GroupTraining *>(groupTrObj1);
    GroupTraining *GroupTrainingObj2 = dynamic_cast<GroupTraining *>(groupTrObj2);
    if (GroupTrainingObj1 != NULL){
        danceFile << GroupTrainingObj1->getTitle() << endl;
    }
    if (GroupTrainingObj2 != NULL){
        danceFile << GroupTrainingObj2->getTitle() << endl;
    }
    danceFile.close();


    return 0;
}