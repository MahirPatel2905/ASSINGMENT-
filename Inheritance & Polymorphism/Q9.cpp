// Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>
using namespace std;

class Matrix {
    int arr[5];
public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }
    Matrix operator+(Matrix &m) {
        Matrix temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;
    cout << "Input for Matrix 1:" << endl;
    m1.input();
    cout << "Input for Matrix 2:" << endl;
    m2.input();
    m3 = m1 + m2;
    cout << "Resultant Matrix:" << endl;
    m3.display();

    return 0;
}

