#include <iostream>
#include <string>

using namespace std;

bool determinePlaindrome(string numString) {
    string reverseString = "";
    int i = numString.length();

    while (i > 0) {
        reverseString += numString.at(i-1);
        i--;
    }

    if(numString == reverseString)
        return true;
    
    return false;
}

bool determineSingleDigit(string numString) {
    int sum = 0;
    string sumString;
    int i = 0;

    while (i < numString.length()) {
        char currentChar = numString.at(i);
        sum += currentChar - '0';
        i++;
    }
    sumString = to_string(sum);

    if(sumString.length() > 1) {
        return false;
    }

    return true;

}

int main() {
    int num = 0;
    bool isPalindrome = false;
    bool isOneDigit = false;
    string numString = "";

    cout << "Enter an integer (up to 5 digits) ";
    cin >> num;

    numString = to_string(num);

    if(numString.length() > 5) {
        cout << "Your input is invalid (too long)";
        return 0;
    }

    isPalindrome = determinePlaindrome(numString); 
    isOneDigit = determineSingleDigit(numString);

    if(isPalindrome)
        cout << numString + " is a palindrome\n";
    else
        cout << numString + " is NOT a palindrome\n";

    if(isOneDigit)
        cout << "the sum of the digits of " + numString + " is one digit";
    else 
        cout << "the sum of the digits of " + numString + " is NOT one digit";

}

