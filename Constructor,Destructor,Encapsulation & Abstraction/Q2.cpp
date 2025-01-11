// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator {
    int num1, num2;

public:
    Calculator(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void add() {
        cout << "Addition: " << (num1 + num2) << endl;
    }

    void subtract() {
        cout << "Subtraction: " << (num1 - num2) << endl;
    }

    void multiply() {
        cout << "Multiplication: " << (num1 * num2) << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << (num1 / (float)num2) << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calc(a, b);
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}

