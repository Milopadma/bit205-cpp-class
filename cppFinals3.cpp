#include <iostream>
using namespace std;

struct studentRec{
    string name;
    string studentID;
    string course;
    studentRec *next;
};
typedef studentRec *studentRecPtr;

void displayRec(string inCourse, studentRecPtr &inHead);

//function called displayRec that is passed two parameters i.e.  inCourse type string and a link-list called inHead. This searches and display all student records enrolled in the inCourse. If there are no student records matching the inCourse, then display the string “no student records found”
void displayRec(string inCourse, studentRecPtr &inHead){
    studentRecPtr temp = inHead;
    bool found = false;
    while (temp != NULL){
        if (temp->course == inCourse){
            cout << temp->name << " " << temp->studentID << " " << temp->course << endl;
            found = true;
        }
        temp = temp->next;
    }
    if (found == false){
        cout << "No student records found." << endl;
    }
}


int main()
{

    

    return 0;
}