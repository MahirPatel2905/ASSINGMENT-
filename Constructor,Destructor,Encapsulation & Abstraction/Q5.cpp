/* . Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene. */

#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double a, double b, double c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    void determineType() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    }
};

int main() {
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    Triangle t(a, b, c);
    t.determineType();

    return 0;
}

