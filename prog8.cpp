// the program to demonstrate the simple and nested if conditions

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   // processing phase
   // prompt for input and read grade from user  
   cout << "Enter marks for the student:\n";        
  int studentMarks;
   cin >> studentMarks; // input grade 
if ( studentMarks >= 90 ) // 90 and above gets "A"   
cout << "You have got A\n";
//@ make the if statements to print grades as 
// 80-89 gets "B"   
if ( studentMarks <= 89 && studentMarks >= 80)
cout << "You have got B\n";
// 70-79 gets "C"   
if ( studentMarks <= 79 && studentMarks >= 70)
cout << "You have got C\n";
// 60-69 gets "D"
if ( studentMarks <= 69 && studentMarks >= 60)
cout << "You have got D\n";
// less than 60 gets "F"
if ( studentMarks < 60)
cout << "You have got F\n";

      system("pause");
} 


// end main

