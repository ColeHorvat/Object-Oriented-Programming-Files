#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cout << "Welcome to the C++ string tool!\n\n";
    string input, s1, s2 = "";

    while(input != "quit") {
        cout << "Please select an option: \n\n";
        cout << "'Input' - Input a string \n";
        cout << "'Reverse' - Print the reverse of the input string \n";
        cout << "'Compare' - Compare the input string and another string \n";
        cout << "'Concat' - Print the input string and another string conactenated \n";
        cout << "'Quit' - Exit program \n\n";

        cout << "Input: ";
        cin >> input;

        transform(input.begin(), input.end(), input.begin(), ::tolower);

        if(input.compare("input") == 0) {
            cout << "Please input your string: ";
            cin.ignore();
            getline(cin, s1);
            cout << "Your string: " << s1 << ", has been successfully inputted\n\n";
            
        } else if(!input.compare("quit") == 0) {
            if(!s1.empty()) {
                if(input.compare("reverse") == 0) {
                    
                    string temp = s1;
                    reverse(temp.begin(), temp.end());

                    cout << "Reversed string: " << temp << "\n\n";

                } else if(input.compare("compare") == 0) {
                    
                    cout << "Please input string that you want to compare: ";
                    cin.ignore();
                    getline(cin, s2);

                    if(s1.compare(s2) == 0) 
                        cout << "'" << s1 << "' is equal to '" << s2 << "'\n\n";
                    else
                        cout << "'" << s1 << "' is not equal to '" << s2 << "'\n\n";

                } else if(input.compare("concat") == 0) {
                    
                    string temp;
                    cout << "Please input string you want to concatenate: ";
                    cin.ignore();
                    getline(cin, s2);

                    temp = s1 + s2;
                    cout << "Your two strings conactenated is: '" << temp << "' \n\n";
                    
                } else {
                    cout << "Your input was not a valid option. Please enter again.";
                }
            } else {
                cout << "Input string is empty. Please input a string before choosing the other options";
            }
        }

    }

    cout << "Program terminated";
}