/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include <iostream>
using namespace std;

class MathOperations {
public:
    
    int operate(int a, int b) {
        return a + b;
    }

    int operate(int a, int b, char operation) {
        if (operation == '-') return a - b;
        return 0;
    }

    double operate(double a, double b) {
        return a * b;
    }

    double operate(int a, double b) {
        return a / b;
    }
};

int main() {
    MathOperations math;
    cout << "Addition: " << math.operate(5, 3) << endl;
    cout << "Subtraction: " << math.operate(5, 3, '-') << endl;
    cout << "Multiplication: " << math.operate(5.0, 3.0) << endl;
    cout << "Division: " << math.operate(10, 2.5) << endl;
    return 0;
}

