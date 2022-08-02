#include <iostream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

using namespace std;


int main()
{
	vector < Employee * > employees( 4 );
	
	employees[ 0 ] = new SalariedEmployee("John", "Smith", "111-11-1111", 800 );
	employees[ 1 ] = new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06 );
	employees[ 2 ] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000,
	.04, 300 );
	employees[ 3 ] = new HourlyEmployee("John", "Charles", "111-11-1111", 26, 80 );

	for ( Employee *employeePtr : employees ) {
		employeePtr->print(); 
		cout << endl;

		BasePlusCommissionEmployee *derivedPtr =
		dynamic_cast < BasePlusCommissionEmployee * >( employeePtr );

		if ( derivedPtr != nullptr ) 
		{
			double oldBaseSalary = derivedPtr->getBaseSalary();
			cout << "old base salary: $" << oldBaseSalary << endl; 
			derivedPtr->setBaseSalary( 1.10 * oldBaseSalary ); 
			cout << "new base salary with 10% increase is: $" << derivedPtr->getBaseSalary() <<
			endl; 
		} 
		cout << "earned $" << employeePtr->earnings() << "\n";
	}

}