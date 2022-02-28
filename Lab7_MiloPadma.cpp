#include <iostream>
using namespace std;

//I GUSTI BAGUS MILO PADMA WIJAYA // e2000426 //200030425

class Date{
    //initialization of method prototypes
public:
	Date(); // initialize attributes with default values	
	Date(int m, int d, int y); // initialize attributes
	void setDate(int& m, int& d, int& y); 
	void getDate(int&, int&, int&); // retrieve Date attribute values
	void showDate(); // Display Date attribute values
	bool isValid(); //returns true if valid
private:
	bool validateDate(); // Validate attribute range values
	int Month;
	int Day;
	int Year;
};

class DateCalculator{
        //initialization of method prototypes
public:
	int daysBetween(Date& , Date& ); // return days elapsed between two Dates
	bool isEarlier(Date& dateC1, Date& dateC2); 
	int leapYears(int year, int month);
private:
};

int main()
{
    Date dateC1; 
    Date dateC2;
    DateCalculator calc;
    int month1, day1, year1;
    int month2, day2, year2;
    char filler;
    //USER INPUT HERE//
    std::cout << "---Number of days Calculator---" << std::endl;

    std::cout << "Input first date, in mm/dd/yyyy format; " << std::endl;
    cin >> month1 >> filler >> day1 >> filler >> year1;
    dateC1.setDate(month1, day1, year1);
    if (dateC1.isValid() == false) {std::cout << "Invalid date, retry..." << std::endl; return 1;};

    std::cout << "Input second date, in mm/dd/yyyy format; " << std::endl;
    cin >> month2 >> filler >> day2 >> filler >> year2;
    dateC2.setDate(month2, day2, year2);
    if (dateC2.isValid() == false) {std::cout << "Invalid date, retry..." << std::endl; return 1;};

    //checks if the two dates are chronologically correct.
    if(calc.isEarlier(dateC1, dateC2) == false) {std::cout << "Second cannot be earlier, retry..."; return 1;};

    //both checks should be done before this point,
    int daysBetween = calc.daysBetween(dateC1, dateC2);
    printf("\nThe days between %d/%d/%d and %d/%d/%d are %d", month1, day1, year1, month2, day2, year2, daysBetween);
    //OUTPUT FOR USER//
    return 0;
}


//Class Date method declarations

Date::Date(){
//nothing, just initialization of constructor    
}

void Date::setDate(int& m, int& d, int& y){
    {Month = m; Day = d; Year = y;}
}

void Date::getDate(int& m, int& d, int& y){ /*this monstrosity is for 'returning' the values using
 call by reference with pointer type data without using return because C++ is not python :( */
    m = Month;
    d = Day;
    y = Year;
}

void Date::showDate(){
    std::cout << Month << Day << Year << std::endl;
}

bool Date::validateDate(){
    if (Month <= 12 && Day <= 31 && Year > 0){ //if values are out of these bounds then count as invalid.
        return true;
    }  
    else{return false;}
}

bool Date::isValid(){
    return validateDate(); //calls validateDate method from private to return as bool.
}
    

//Class DateCalculator method declarations

int DateCalculator::daysBetween(Date& dateC1, Date& dateC2){
    const int daysMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //need this for the different amounts of days in a month
    int month1, day1, year1;
    dateC1.getDate(month1, day1, year1);
    int month2, day2, year2;
    dateC2.getDate(month2, day2, year2);
    int daysBetween;
    //adds up all the number of days from both dates for use in comparison below.
    int num1 = year1 * 365 + day1; //this gets the total number of days, without months. 
    for (int i = 0; i < month1 - 1; i++){ //this adds up the days according to months given.
        num1 = num1 + daysMonth[i];
    }

    int num2 = year2 * 365 + day2; //this gets the total number of days, without months. 
    for (int i = 0; i < month2 - 1; i++){ //this adds up the days according to months given.
        num2 = num2 + daysMonth[i];
    }

    //now to calculate the leap years// as each leap year is just another day added.
    num1 = num1 + leapYears(year1, month1); //counts the leap years for dateC1
    num2 = num2 + leapYears(year2, month2); //counts the leap years for dateC2
    daysBetween = num2 - num1; //the difference between these two is the difference of days;

    //returns the days between the given two dates.
    return daysBetween;
}

bool DateCalculator::isEarlier(Date& dateC1, Date& dateC2){
    int month1, day1, year1;
    dateC1.getDate(month1, day1, year1);
    int month2, day2, year2;
    dateC2.getDate(month2, day2, year2);
    bool checks;
    int totalDate1 = month1 + day1 + year1; //add them all up for comparison later 
    int totalDate2 = month2 + day2 + year2; //in this case, a valid comparison would mean totalDate2 is larger in value
    if (totalDate1 <= totalDate2){
        checks = true;
    }
    else{checks = false;}
    //returns True if date1 is earlier, else false.
    return checks;
}

int DateCalculator::leapYears(int year, int month){
    int y = year;
    int m = month;
    if(m <= 2){year = year - 1;}; //checks if its past february, leap year not valid if its before feb.
    int leapYearC = year / 4 - year / 100 + year / 400;

    return leapYearC;
}