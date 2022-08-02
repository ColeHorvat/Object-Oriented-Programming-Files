#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>
#include <iostream>

#include "Date.h"

class Employee
{

public:
    Employee (const string &, const string &, const string &, const Date birthDate);
    
    virtual void print() {
        cout << "\nFirst Name: " << firstName 
        << "\nLast Name: " << lastName
        << "\nSSN: " << socialSecurityNumber << endl;
    };
    virtual double earnings() = 0;

    virtual string getFirstName() { return firstName; };
    virtual void setFirstName(const string newFirstName) { firstName = newFirstName; };

    virtual string getLastName() { return lastName; };
    virtual void setLastName(const string newLastName) { lastName = newLastName; };

    virtual string getSocialSecurityNumber() { return socialSecurityNumber; };
    virtual void setSocialSecurityNumber( const string newSSN) { socialSecurityNumber = newSSN; };

    virtual Date getBirthDate() { return birthDate; };
    virtual void setDate( const Date newDate ) { birthDate = newDate; };

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    Date birthDate;
};


#endif // EMPLOYEE_H
