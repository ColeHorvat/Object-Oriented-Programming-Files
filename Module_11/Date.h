#include <iostream>

using namespace std;

class Date {
    public:
        explicit Date( int year, int month, int day )
            : year(year), month(month), day(day)
        {
            
        }
    
        void setYear( int newYear ) { 
            year = newYear;
        }
        int getYear() { return year; }

        void setMonth( int newMonth ) { 
            month = newMonth;
        }
        int getMonth() { return month; }

        void setDay( int newDay ) { 
            day = newDay;
        }
        int getDay() { return day; }

        void displayDate() { 
            cout << month << "/" << day << "/" << year << endl;
        }


    private:
        int year;
        int month;
        int day;
};