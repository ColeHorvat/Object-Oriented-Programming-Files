#include <iostream>
using namespace std;

class Date
{

public:
	int day;
	int month;
	int year;	

	explicit Date(int nYear, int nMonth, int nDay) {
		year = nYear;
		month = nMonth;
		day = nDay;
	}

	friend int operator - (Date d1, Date d2)
	{
		int age;

		age = d1.year - d2.year;

		if(d1.month < d2.month)
			age--;
		else if (d1.month == d2.month)
			if(d1.day < d2.day)
				age--;

		return age;
	}
};