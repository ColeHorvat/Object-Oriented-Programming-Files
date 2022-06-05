//I'm slightly confused about the rules of this game but hopefully I got it right :)
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	int num, guess, diff;
	srand(time(NULL));
	num = (1 + rand() % 100);
	cout << "Guess the number! (1-100)\n";

	while (guess != num) {
		cin >> guess;
		diff = num - guess;

		if(diff < -25) {
			cout << "-----\n";
		} else if (diff > -25 && diff < 0) {
			cout << "---\n";
		} else if (diff > 25) {
			cout << "+++++\n";
		} else {
			cout << "+++\n";
		}
	}

	cout << "YOU ARE THERE (######YOU WON ####)\n";
}
