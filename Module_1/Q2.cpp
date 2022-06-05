#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int num1 = 0;
    int num2 = 0;

    cout << "Enter first number to compare ";
    cin >> num1;

    cout << "Enter second number to compare ";
    cin >> num2;

    if (num1 > num2)
        cout << num1 << " is larger\n";
    
    if(num2 > num1)
        cout << num2 << " is larger\n";

    if(num1 == num2)
        cout << "The numbers are equal\n"; 

}