#include <iostream>
#include "Date.h"

using namespace std;

int main() {
	int year, month, day;

	cout << "Enter birth year, month, and day";
	cin >> year;
	cin >> month;
	cin >> day;

	try {
		Date birthDate(year, month, day);

		time_t currentTime = time(NULL);
		struct tm *aTime = localtime(&currentTime);

		int currentMonth = aTime->tm_mon + 1;

		if(birthDate.getMonth() != currentMonth)
			cout << "Your birth month is: " << birthDate.getMonth() << endl;
		else
			throw(currentMonth);

	} catch (...) { 
		cout << "Happy birthday!" << endl;
	}

}