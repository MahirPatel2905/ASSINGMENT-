/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance) */

#include <iostream>
using namespace std;

class Students {
protected:
    int rollNo;
public:
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
	void displayRollNumber() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : public Students {
protected:
    float marks1, marks2;
public:
    void inputMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter marks for Subject 2: ";
        cin >> marks2;
    }
	void displayMarks() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

class Result : public Test {
private:
    float totalMarks;
public:
    void calculateTotal() {
        totalMarks = marks1 + marks2;
    }
	void displayResult() {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result student;
    cout << "Enter Student Details:" << endl;
    student.inputRollNumber();
    student.inputMarks();

    student.calculateTotal();
    cout << "\nStudent Result:" << endl;
    student.displayResult();

    return 0;
}

