
#include <iostream>
using namespace std;

// Online Final Examination (Using Quiz mode on LMS)
// - Duration is 3 hours / questions randomised

// a) if-else/switch, loops (for, while, do-while)

// i) 
//    if ()
//    {


//    }
//   else if (

// ii) for (start = 0; ....)
//     {



//     }

// iii) link-list (addition)
    //create a link list 
    //add a node to the link list
class LinkListNode 
    {
        public:
            int data;
            LinkListNode *next;
            
    };

void printList(LinkListNode* node){
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

//push new node to the front of the linked list
void push(LinkListNode** head_ref, int new_data)
{
    //node allocation//creating a new node
    LinkListNode* new_node = new LinkListNode();
    //insert new data to newly created node
    new_node->data = new_data;
    //make next of new node as head(h)
    new_node->next = (*head_ref);
    //move the head to point to the newly created node
    (*head_ref) = new_node;
}

int main()
{
    //program to create a simple linked list with 3 nodes
    LinkListNode* head = NULL;
    LinkListNode* second = NULL;
    LinkListNode* third = NULL;
    //allocate 3 nodes in the heap
    head = new LinkListNode;
    second = new LinkListNode;
    third = new LinkListNode;

    //assign values to the nodes
    head->data = 1;
    //link first node with the second node
    head->next = second; 
    //assign values to the second node
    second->data = 2;
    //link second node with the third node
    second->next = third;
    //next pointer of second block points to the third block, now all three blocks are linked
    //assign values to the third node
    third->data = 3;
    //next pointer of third block points to NULL, so it is the last node
    third->next = NULL;

    //print the linked list
    printList(head);


    return 0;
}

// iv) classes - write classes
//     a) constructors - parent/child
//     b) setters/getters
//     c) methods
//     d) inheritance 
//     e) polymorphism (virtual classes)

// v) templates - writing function templates 

// Write a function template called printArray that takes an 
// arbitrary array type and and two additional integer arguments, 
// lowSubscript, highSubscript. A call to this function will 
// print only the designated portion of the array. 
// Validate lowSubscript and highSubcript if either is out of range or 
// if highSubscript is less than or equal to lowSubscript, 
// printArray should return 0; 
// otherwise printArray should return the number of elements printed.

// template <class T>
// int printArray(T array[],int lowSubscript, int highSubscript)
// {
//    if(lowSubscript > highSubscript || lowSubscript < 0 || highSubscript > MAX)
//       return 0;
//    int count=0
//    for (int i=lowSubscript; i<highSubscript ;i++)
//    {
//        cout<<array[i]<<endl;
//        count++;
//    }
//    return count;
// } 

// a)	An electricity board charges the following rates to domestic users to discourage large consumption of energy :

// 	For the first 200 units	- RM0.40 per unit
// 	Beyond 200 units	- RM0.60 per unit
       
// If the total cost is more than RM100 then an additional surcharge of 15% is added. Write the following by using the definition :

	
// 	struct record{
// 		char name[storage];
// 		int units;
// 		double charge;
// 	};
// 	typedef struct record user;
	
// Write a function to calculate the total charges.


// void calculate(User inUser) {
//     if(inUser.units <= 200) {
//         inUser.charge = 0.40 * inUser.units;
//     }
//     else {
  
//         inUser.charge = (200 * 0.4) + (inUser.units - 200)* 0.60;
//     }
//     if(inUser.charge > 100) {
//         inUser.charge += 15/100;
//     }
// }





// for (int i = 0; i < highSubscript; i++) {
//      {
//         if(highSubscript <= lowSubscript)
//             return 0;
//         else {
//             return *array;
//         }
//     }
// }
// d) classes - using STL (vectors)



// class phoneRec{
//     string personName;
//     string phoneNumber;
// public:
//     phoneRec( string inName, string inPhone);
//     ~phoneRec();
//     void changeName(string inName);
//     void changeNumber(string inPhone);
//     void phoneDisplay();
// };
// phoneRec::phoneRec(string inName, string inPhone) 
// {
//   personName=inName;
//   phoneNumber=inPhone;
// }

// phoneRec::~phoneRec() {}

// void phoneRec::changeName(string inName) {
//     personName = inName;
// }

// void phoneRec::changeNumber(string inPhone) {
//     phoneNumber = inPhone;
// }

// void phoneRec::phoneDisplay() {
//     cout << "Name: " << personName << endl;
//     cout << "Phone number: " << phoneNumber << endl;
// }

// class Boss : public Employee {
// private:
//     double bonus;
// public:
//     Boss(string inName, string inPost, double salary, double inBonus);
//     void showEmployee();
//     double totalIncome();
// };
// void Boss::showEmployee() {
//     cout << "Name : " <<  name << endl;
//     cout << "Position : " <<  position << endl;
//     cout << "Salary: "  << salary << endl;
// }

// Boss::Boss(string inName, string inPost, double salary, double inBonus) :
//         Employee(inName, inPost, salary) {
//     bonus = inBonus;
// }

// double Boss::totalIncome() {
//     return salary + bonus;
// }
