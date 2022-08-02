#include <iostream>
#include <stdio.h>

using namespace std;

template <class T> T multiply(T x, T y);
template <class T> T divide(T x, T y);

int main() { 
	double x, y, answer;
	//int x, y, answer;
	//float x, y, answer;

	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	answer = multiply(x, y);
	cout << "The product of " << x << " and " << y << " is " << answer;
	answer = divide(x, y);
	cout << "\nThe quotient of " << x << " and " << y << " is " << answer << endl;

	return 0;
}

template <class T> T multiply(T x, T y) {
	T result = x * y;
	return result;
}

template <class T> T divide(T x, T y) {
	T result = x / y;
	return result;
}