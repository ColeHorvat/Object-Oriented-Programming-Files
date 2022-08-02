#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ standard string class
#include "Employee.h"
#include "Date.h"

class CommissionEmployee : public Employee
{
public:
   CommissionEmployee( const std::string &, const std::string &,
      const std::string &, const Date birthDate, double = 0.0, double = 0.0 );

   void setGrossSales( double sales) {
      grossSales = sales < 0.0 ? 0.0 : sales;
   }; // set gross sales amount

   double getGrossSales() { return grossSales; }; // return gross sales amount

   void setCommissionRate( double rate) {
      commissionRate = rate < 0.0 ? 0.0 : rate;
   }; // set commission rate (percentage)
   double getCommissionRate() { return commissionRate; }; // return commission rate

   double earnings() { 
      return commissionRate * grossSales;
   }; // calculate earnings
   void print() { 
      cout << "\nCommission Employee: ";
      Employee::print();
   }; // print CommissionEmployee object
protected:
   double grossSales; // gross weekly sales

   double commissionRate; // commission percentage
}; // end class CommissionEmployee

#endif


