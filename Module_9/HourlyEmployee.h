// Fig. 10.27: hourly.h
// HourlyEmployee class definition.
/* #define _GLIBCXX_USE_CXX11_ABI 0
#ifndef HOURLY_H
#define HOURLY_H */
#include "Employee.h"  // Employee class definition
#include "Date.h" // Date class definition

using namespace std;
class HourlyEmployee : public Employee {

public:
   HourlyEmployee( const string &, const string &, const string &, const Date birthDate, double = 0.0, double = 0.0);

   void setWage( double newWage) { 
      wage = newWage < 0.0 ? 0.0 : newWage;
   };
   double getWage() { return wage; };

   void setHours( double newHours) { 
      hours = newHours < 0.0 ? 0.0 : newHours;
   };
   double getHours() { return hours; };

   virtual double earnings() {
      if(hours <= 40)
         return wage * hours;
      else {
         return ( 40 * wage ) + (( hours - 40 ) * wage * 1.5);
      }   
   };
   virtual void print() {
      cout << "\nHourly Employee: ";
      Employee::print();
   };

private:
   double wage;   // wage per hour
   double hours;  // hours worked for week

}; // end class HourlyEmployee

/* #endif  */// HOURLY_H
