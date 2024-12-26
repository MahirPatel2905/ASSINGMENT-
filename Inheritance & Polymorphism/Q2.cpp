// Write a C++ Program to find Area of Rectangle using inheritance.

#include <iostream>
using namespace std;
class Shape {
protected:
    double length, width;
public:
    void inputDimensions() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
    }
};

class Rectangle : public Shape {
public:
    double calculateArea() {
        return length * width;
    }
	 void displayArea() {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    rect.inputDimensions();
	rect.displayArea();
	return 0;
}

