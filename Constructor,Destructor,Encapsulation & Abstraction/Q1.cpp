// Write a programto find the multiplication values and the cubic values using inline function.

#include <iostream>
using namespace std;

class Operations {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }

    inline int cubic(int a) {
        return a * a * a;
    }
};

int main() {
    Operations op;
    int num1, num2;

    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << op.multiply(num1, num2) << endl;

    cout << "Enter a number to find its cube: ";
    cin >> num1;
    cout << "Cubic value of " << num1 << " is: " << op.cubic(num1) << endl;

    return 0;
}

