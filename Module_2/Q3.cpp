#include <iostream>

using namespace std;

int main() {
    float num = 0;
    float i = 1;
    float sum = 1;

    cout << "Enter an integer ";
    cin >> num;

    while (i <= num) {
        float fact = 1;
        float j = 1;
        // cout << i << endl;

        while(j <= i) {
            fact = fact * j;
            j++;
        }

        if(i < 4)
            sum += i / fact;
        else
            sum += 4 / fact;

        i++;
    }

    cout << "Sum: " << sum << endl;


}