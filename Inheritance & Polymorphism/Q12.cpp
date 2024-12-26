// Write a programto swap the two numbers using friend function without using third variable.

#include <iostream>
using namespace std;

class SwapNumbers {
    int num1, num2;
public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
    void display() {
        cout << "Number 1: " << num1 << ", Number 2: " << num2 << endl;
    }

    friend void swapNumbers(SwapNumbers &obj);
};
void swapNumbers(SwapNumbers &obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    SwapNumbers obj;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    obj.setNumbers(a, b);
    cout << "Before Swap:" << endl;
    obj.display();
    swapNumbers(obj);
    cout << "After Swap:" << endl;
    obj.display();

    return 0;
}

