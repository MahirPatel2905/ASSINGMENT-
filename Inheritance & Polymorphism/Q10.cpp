// Write a programto concatenate the two strings using Operator Overloading.

#include <iostream>
#include <string>
using namespace std;

class String {
    string str;
public:
    void input() {
        cout << "Enter string: ";
        cin >> str;
    }
    String operator+(String &s) {
        String temp;
        temp.str = str + s.str;
        return temp;
    }
    void display() {
        cout << "Resultant String: " << str << endl;
    }
};

int main() {
    String s1, s2, s3;
    cout << "Input for String 1:" << endl;
    s1.input();
    cout << "Input for String 2:" << endl;
    s2.input();
    s3 = s1 + s2;
    s3.display();

    return 0;
}

