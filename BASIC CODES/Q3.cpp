//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath>
using namespace std;
class Circle {
private:
    double radius; 

public:
    Circle(double r) {
        radius = r;
    }
    double calculateArea() {
        return M_PI * radius * radius;
    }
    double calculateCircumference() {
        return 2 * M_PI * radius;
    }
    void displayDetails() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    Circle myCircle(r);
    myCircle.displayDetails();

    return 0;
}

