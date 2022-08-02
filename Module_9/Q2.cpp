#include <iostream>
#include <vector>
#include <time.h>

#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "Date.h"


using namespace std;


int main()
{
	time_t currentTime = time(NULL);
	struct tm *aTime = localtime(&currentTime);

	int currentMonth = aTime->tm_mon + 1;
	
	vector < Employee * > employees( 4 );
	
	employees[ 0 ] = new SalariedEmployee("John", "Smith", "111-11-1111", new Date(1989, 4, 20), 800 );
	employees[ 1 ] = new CommissionEmployee("Sue", "Jones", "333-33-3333", new Date(2000, 10, 7), 10000, .06 );
	employees[ 2 ] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", new Date(1995, 4, 4), 5000,
	.04, 300 );
	employees[ 3 ] = new HourlyEmployee("John", "Charles", "111-11-1111", new Date(1974, 12, 18), 26, 80 );

	for ( Employee *employeePtr : employees ) {
		employeePtr->print(); 
		cout << endl;

		BasePlusCommissionEmployee *BPCPtr =
		dynamic_cast < BasePlusCommissionEmployee * >( employeePtr );

		CommissionEmployee *CPtr =
		dynamic_cast < CommissionEmployee * >( employeePtr );

		SalariedEmployee *SPtr =
		dynamic_cast < SalariedEmployee * >( employeePtr );

		HourlyEmployee *HPtr =
		dynamic_cast < HourlyEmployee * >( employeePtr );

		if(employeePtr->getBirthDate().getMonth() == currentMonth) {
			if ( BPCPtr != nullptr) {
				double oldBaseSalary = BPCPtr->getBaseSalary();
				BPCPtr->setBaseSalary( oldBaseSalary + 100.00 );
				cout << "Happy Birthday! $100 has been added to your salary" << endl;
			} else if ( CPtr != nullptr) {
				double oldGrossSales = CPtr->getGrossSales();
				double commissionRate = CPtr->getCommissionRate();

				CPtr->setGrossSales( oldGrossSales + ( 100 / commissionRate ));
				cout << "Happy Birthday! $100 has been added to your salary" << endl;
			} else if ( HPtr != nullptr) {
				double oldHours = HPtr->getHours();
				double wage = HPtr->getWage();
				double addedHours = 100 / wage;
				double rHours = 0;
				double oHours = 0;

				if(oldHours + addedHours > 40) {
					rHours = 40 - oldHours;
					oHours = addedHours - rHours;

					HPtr->setHours(oldHours + (rHours + (0.67 * oHours)));

				} else {
					HPtr->setHours(oldHours + addedHours);
				}

				cout << "Happy Birthday! $100 has been added to your salary" << endl;
				
			} else if ( SPtr != nullptr ) {
				double oldSalary = SPtr->getWeeklySalary();
				SPtr->setWeeklySalary(oldSalary + 100.00);

				cout << "Happy Birthday! $100 has been added to your salary" << endl;
			}
		}


		cout << "earned $" << employeePtr->earnings() << "\n";
	}

}