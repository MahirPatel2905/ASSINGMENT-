/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void inputPersonData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }
	 void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;
public:
    void inputStudentData() {
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore(); 
    }
	void displayStudentData() {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    double salary;
public:
    void inputTeacherData() {
        inputPersonData();
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore(); 
    }
	void displayTeacherData() {
        displayPersonData();
        cout << "Salary: Rs." << salary << endl;
    }
};

int main() {
    cout << "Enter Student Details:" << endl;
    Student student;
    student.inputStudentData();

    cout << "\nStudent Details:" << endl;
    student.displayStudentData();

    cout << "\nEnter Teacher Details:" << endl;
    Teacher teacher;
    teacher.inputTeacherData();

    cout << "\nTeacher Details:" << endl;
    teacher.displayTeacherData();

    return 0;
}

