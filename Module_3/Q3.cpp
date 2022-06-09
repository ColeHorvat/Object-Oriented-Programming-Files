#include <iostream>
#include <conio.h>
using std::cin;  // program uses cin
using std::cout; // program uses cout
using std::endl; // program uses endl

int main()
{
    // clear the screen.
    // declare variable type float and char
    float a, b, area;
    char ch;
    while (ch != 'x')
    {
        // Input the choice.
        cout << endl
             << endl;
        cout << "Enter c for circle" << endl;
        cout << "Enter s for square" << endl;
        cout << "Enter r for rectangle" << endl;
        cout << "Enter t for triangle" << endl;
        cout << "Enter x to exit" << endl;
        cin >> ch;
        // conditional switch statement.
        if (ch == 'c')
        {
            area = areaOfCircle(a)
        }
        if (ch == 's')
        {
            area = areaOfSquare(a)
        }

        if (ch == 'r')
        {
            area = areaOfRectangle(a, b)
        }
        if (ch == 't')
        {
            area = areaOfTriangle(a, b)
        }

        if (ch != 'c' && ch != 'r' && ch != 's' && ch != 't' && ch != 'x')
        {
            cout << "Syntax Error";
            ch == 'c';
            continue;
        }

        if (ch == 'x')
            break;
        cout << "Area is " << area;
    }
    // print the area.

    // get character

    system("pause");
}

float areaOfCircle(float a) {
    cout << "Enter radius" << endl;
    cin >> a;
    return a * a;
}


float areaOfTriangle(float a, float b) { 
    cout << "Enter the height" << endl;
    cin >> a;
    cout << "Enter the base" << endl;
    cin >> b;
    return 0.5 * a * b;
}

float areaOfSquare(float a) { 
    cout << "Enter the side" << endl;
    cin >> a;
    return a * a;
}

float areaOfRectangle(float a, float b) {
    cout << "Enter the length" << endl;
    cin >> a;
    cout << "Enter the breadth" << endl;
    cin >> b;
    return a * b;
}
//@ convert the program using a switch statement
//@ add one more option to calculate the area of rhombus