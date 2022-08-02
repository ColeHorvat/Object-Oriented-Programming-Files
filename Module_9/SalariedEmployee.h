// Fig. 10.25: salaried.h
// SalariedEmployee class derived from Employee.
/* #ifndef SALARIED_H
#define SALARIED_H */
#include "Employee.h"  // Employee class definition
#include "Date.h"
using namespace std;
class SalariedEmployee : public Employee {

public:
   SalariedEmployee( const string &, const string &,
      const string &, const Date birthDate, double = 0.0 );

   void setWeeklySalary( double salary) {
      weeklySalary = salary < 0.0 ? 0.0 : salary;
   }
   double getWeeklySalary() { return weeklySalary; };

   double earnings() {
      return weeklySalary;
   }
   void print() {
      cout << "\nSalaried Employee: ";
      Employee::print();
   };  // "salaried employee: "

private:
   double weeklySalary;

}; // end class SalariedEmployee

/* #endif */ // SALARIED_H
