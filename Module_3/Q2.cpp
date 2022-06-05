#include <iostream>

using namespace std;
int main() {
    cout << "## SALES COMMISION CALCULATOR ##\n";
    float input;

    while (input != -9) {
        cout << "Enter the amount of gross sales in the last week (input -9 to exit)\n";
        cin >> input;

        if(input == -9) break;

        float commision, total = 0;
        commision = input * 0.09;
        total = commision + 200;

        cout << "Total payment for this week is " << total << endl;
    }

    cout << "--- Program terminated ---\n";

}