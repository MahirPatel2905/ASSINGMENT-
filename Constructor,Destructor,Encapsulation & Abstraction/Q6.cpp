/* Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor */

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double baseSalary) {
        name = empName;
        employeeID = empID;
        salary = baseSalary;
    }

    void setSalary(double performanceFactor) {
        salary += salary * performanceFactor;
    }

    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int id;
    double baseSalary, performanceFactor;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    Employee emp(name, id, baseSalary);

    cout << "Enter performance factor (e.g., 0.10 for 10% increase): ";
    cin >> performanceFactor;

    emp.setSalary(performanceFactor);
    emp.displayDetails();

    return 0;
}



