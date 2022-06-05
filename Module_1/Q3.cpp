#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    float total_miles = 0.00;
    float cost_per_gallon = 0.00;
    float avg_miles_per_gallon = 0.00;
    float parking = 0.00;
    float tolls = 0.00;
    float sum = 0.00;

    cout << "Enter your total miles driven per day (X.XX): ";
    cin >> total_miles;

    cout << "Enter your cost per gallon of gasoline (X.XX): ";
    cin >> cost_per_gallon;

    cout << "Enter your average miles per gallon (X.XX): ";
    cin >> avg_miles_per_gallon;

    cout << "Enter your daily parking fees (X.XX): ";
    cin >> parking;

    cout << "Enter your daily tolls (X.XX): ";
    cin >> tolls;

    sum = (total_miles / avg_miles_per_gallon) * cost_per_gallon + parking + tolls;

    cout << "Your daily travel cost is: " << sum << endl;

}