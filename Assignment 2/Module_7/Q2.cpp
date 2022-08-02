#include <ctime>
#include <iostream>
#include "Date.h"
using namespace std;

int displayAge() {
	time_t now;
	tm* currTm;

	int age;
	int currYear;
	int currMonth;
	int currDay;

	int bYear;
	int bMonth;
	int bDay;

	cout << "Enter the year you were born : ";
	cin >> bYear;
	cout << "Enter the month you were born : ";
	cin >> bMonth;
	cout << "Enter the day you were born : ";
	cin >> bDay;

	time(&now);

	currTm = localtime(&now);

	currYear = currTm->tm_year + 1900;
	currMonth = currTm->tm_mon + 1;
	currDay = currTm->tm_mday;

	Date birthDate(bYear, bMonth, bDay);
	Date currDate(currYear, currMonth, currDay);

	age = currDate - birthDate;

			

	return age;
		
}

int main() {
	cout << displayAge();
}

