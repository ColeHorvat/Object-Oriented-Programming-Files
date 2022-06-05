#include <iostream>

int main() {
    const float PI = 3.14;
    float radius = 0;

    std::cout << "Enter radius of circle ";
    std::cin >> radius;

    //Output statements

    //Diameter
    std::cout << "Diameter: " << radius * 2 << std::endl;

    //Area
    std::cout << "Area: " << PI * (radius * radius) << std::endl;

    //Circumference
    std:: cout << "Circumference: " << PI * (2*radius) << std::endl;
}

