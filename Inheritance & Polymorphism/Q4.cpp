// Write a C++ Program display Student Mark sheet using Multiple inheritance.

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void inputStudentDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore(); 
    }
	void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Marks {
protected:
    int math, science, english;
public:
    void inputMarks() {
        cout << "Enter marks in Math: ";
        cin >> math;
        cout << "Enter marks in Science: ";
        cin >> science;
        cout << "Enter marks in English: ";
        cin >> english;
        cin.ignore(); 
    }
	 void displayMarks() {
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
    }
};

class Marksheet : public Student, public Marks {
public:
    void displayMarksheet() {
        displayStudentDetails();
        displayMarks();
        int total = math + science + english;
        float percentage = total / 3.0;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Marksheet student;
    cout << "Enter Student Details:" << endl;
    student.inputStudentDetails();
	cout << "\nEnter Marks Details:" << endl;
    student.inputMarks();
	cout << "\nStudent Marksheet:" << endl;
    student.displayMarksheet();

    return 0;
}

