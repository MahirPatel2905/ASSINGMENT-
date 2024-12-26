// Write a program to find the max number from given two numbers using friend function.

#include <iostream>
using namespace std;

class CompareNumbers {
    int num1, num2;
public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend int findMax(CompareNumbers obj);
};
int findMax(CompareNumbers obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    CompareNumbers obj;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    obj.setNumbers(a, b);
    int maxNum = findMax(obj);
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

