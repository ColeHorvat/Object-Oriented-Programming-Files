#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
#include "CommissionEmployee.h" // CommissionEmployee class declaration
#include "Date.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &,
      const std::string &, const Date birthDate, double = 0.0, double = 0.0, double = 0.0 );

   void setBaseSalary( double salary) { 
      baseSalary = salary < 0.0 ? 0.0 : salary;
   }; // set base salary
   double getBaseSalary() { return baseSalary; }; 

   void setGrossSales( double sales) {
      grossSales = sales < 0.0 ? 0.0 : sales;
   }; // set gross sales amount

   double getGrossSales() { return grossSales; }; // return gross sales amount

   void setCommissionRate( double rate) {
      commissionRate = rate < 0.0 ? 0.0 : rate;
   }; // set commission rate (percentage)
   double getCommissionRate() { return commissionRate; }; // return commission rate

   double earnings() {
      return baseSalary + ( commissionRate * grossSales );
   }; // calculate earnings
   void print() const; // print BasePlusCommissionEmployee object
private:
   double baseSalary;
   double grossSales;
   double commissionRate;
}; // end class BasePlusCommissionEmployee

#endif

