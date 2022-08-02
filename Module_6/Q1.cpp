#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;


void display(int m[10][5], char n[10]) {
    GradeBook grades("COMP 3141");
    grades.displayMessage();
    cout<<"Displaying marks: "<<endl;
    for (int i = 0; i <10; ++i) {
        cout<< "\n" << n[i] << ": ";
        for (int j = 0; j<5; ++j) {
            cout << m[i][j] << ", ";
        }
    }
}

void sortArrayAlphabetically(char a[], int size) {
    int insert;

    for(int next = 1; next < size; next++) {
        insert = a[next];
        int moveItem = next;

        while((moveItem > 0) && ( a[moveItem - 1] > insert)) {
            a[moveItem] = a[moveItem - 1];
            moveItem--;
        }

        a[moveItem] = insert;
    }
}

int main() {
    int marks[10][5] = {{88, 76, 90, 61, 69}, 
    {41, 57, 39, 70, 100}, 
    {87, 85, 64, 35, 66}, 
    {71, 46, 65, 44, 59}, 
    {55, 96, 72, 43, 67}, 
    {63, 65, 57, 76, 91}, 
    {96, 55, 50, 67, 64}, 
    {36, 44, 51, 87, 70}, 
    {71, 52, 51, 67, 62}, 
    {96, 94, 65, 83, 32}};
    
    char names[10] = {'J', 'S', 'B', 'A', 'D', 'M', 'H', 'L', 'T', 'K'};
    
    sortArrayAlphabetically(names, 10);
    display(marks, names);
    return 0;
}




// Make a caracter array to store the names of ten students
// make another int marks[10][5] array to store three marks for ten students
// extend the display function to display the name of every student, followed by 5 marks, total , percentage and Grade obtained by the students.
// display() should be called ten time from the loop in the main body of the program