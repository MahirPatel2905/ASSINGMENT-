/* .Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */

#include <iostream>
using namespace std;

class Area {
public:
    double calculate(double radius) {
        return 3.14159 * radius * radius;
    }

    double calculate(double length, double breadth) {
        return length * breadth;
    }

    double calculate(double base, double height, char triangle) {
        return 0.5 * base * height;
    }
};

int main() {
    Area area;
    cout << "Area of Circle (radius = 8): " << area.calculate(8.0) << endl;
    cout << "Area of Rectangle (length = 6, breadth = 5): " << area.calculate(6.0, 5.0) << endl;
    cout << "Area of Triangle (base = 6, height = 4): " << area.calculate(6.0, 4.0, 'T') << endl;

    return 0;
}

