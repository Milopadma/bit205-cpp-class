#include <iostream>
using namespace std;

int count = 3;
void uInput();
void findExpensive();
float totalCost();
void searchBook();


struct BookRec
{
    string title;
    string author;
    string publisher;
    float cost;
};

BookRec data[3]; // this is so its all global and accessible in all methods.

int main()
{
    std::cout << "\n---Book Recorder---" << std::endl;
    int choice;
    string *title, *author;
    std::cout << "1. Enter book information" << std::endl;
    std::cout << "2. Find most expensive book" << std::endl;
    std::cout << "3. Total cost of all books" << std::endl;
    std::cout << "4. Find a book: " << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter choice;" << std::endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            uInput();
            main();
            break;
        case 2:
            findExpensive();
            main();
            break;
        case 3:
            int total;
            total = totalCost();
            std::cout << "the total cost is " << total << std::endl;
            main();
            break;
        case 4:
            searchBook();
            main();
            break;

        default: // this is basically case 5 for exiting the program
            std::cout << "Exiting program.." << std::endl;
            break;
    }
    return 0;
}

void uInput()
{
    // accepts n, maximum is 10, uses single dimensional array.
    string title, author, publisher;
    float cost;
    for(int n = 0; n < count; n++) 
    {
        std::cout << "\nEnter book title; " << std::endl;
        cin >> title;
        std::cout << "Enter book author; " << std::endl;
        cin >> author;
        std::cout << "Enter book publisher; " << std::endl;
        cin >> publisher;
        std::cout << "Enter book price; " << std::endl;
        cin >> cost;
        std::cout << "Book number " << n + 1 << " recorded." << std::endl;
        // struct BookRec bookEntry[n] = {{title, author, publisher, cost}}; 

        // struct BookRec bookEntry[count];
        data[n].title = title; 
        data[n].author = author;
        data[n].publisher = publisher;
        data[n].cost = cost;


        // BookRec bookEntry[n] = {bookEntry.title, bookEntry.author, bookEntry.publisher, bookEntry.cost};
        // bookEntry[n].title = title;
    }
}

void findExpensive() //preferably iterate through all book and its costs and compare them all to find the highest value.
{
    // for(int n = 0; n < count; n++){
    //     // if bookEntry.cost > bookEntry.cost;
    // }
        int max = 0;
        int idx;
        for (int i=0; i < count; i++)
        {
            if (max < data[i].cost)
            {
                max = data[i].cost;
                idx = i; //this saves the array number in a variable
            }
        }
    std::cout << "The most expensive book is " << data[idx].title << " with price of " << data[idx].cost << std::endl;
}
float totalCost(){ //adds all cost of book entries and returns total.
    int total = 0;
    for (int n = 0; n < count; n++)
    {
        total = total + data[n].cost;
    }
    return total;
}

void searchBook(){ //just match user input to book records until it finds a match, then return it, this function needs to return a messagae containing bookRec.title
    std::cout << "What book do you want to find?" << std::endl;
    string userBook;
    cin >> userBook;
    int found = 0;
    for (int n = 0; n < count; n++)
    {
        if (userBook == data[n].title){
            std::cout << userBook << " has already been bought." << std::endl;
            found = 1;
        }
        else{continue;}
    }
    if(found == 0){
        std::cout << "Need to buy book" << std::endl;
    }
}