/* Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation. */

#include <iostream>
#include <string>
using namespace std;
class Address {
private:
    string street, city, state;

public:
    Address(string st, string ct, string stt) : street(st), city(ct), state(stt) {}

    void displayAddress() {
        cout << "Address: " << street << ", " << city << ", " << state << endl;
    }
};
class Student {
private:
    string name, studentClass;
    int rollNumber;
    double marks;
    Address address; 

public:
    Student(string n, string cls, int roll, double m, Address addr)
        : name(n), studentClass(cls), rollNumber(roll), marks(m), address(addr) {}

    char calculateGrade() {
        if (marks >= 90) return 'A';
        if (marks >= 75) return 'B';
        if (marks >= 50) return 'C';
        return 'F';
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

int main() {
    string name, studentClass, street, city, state;
    int rollNumber;
    double marks;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter class: ";
    cin >> studentClass;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter street: ";
    cin >> street;
    cout << "Enter city: ";
    cin >> city;
    cout << "Enter state: ";
    cin >> state;
    Address addr(street, city, state);
    Student student(name, studentClass, rollNumber, marks, addr);
  
    student.displayDetails();

    return 0;
}



