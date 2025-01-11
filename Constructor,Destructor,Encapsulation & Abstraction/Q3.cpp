/* Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/ 

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setDetails(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    void getDetails() {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car;
    string company, model;
    int year;

    cout << "Enter car company: ";
    cin >> company;
    cout << "Enter car model: ";
    cin >> model;
    cout << "Enter car year: ";
    cin >> year;

    car.setDetails(company, model, year);
    cout << "\nCar Details:" << endl;
    car.getDetails();

    return 0;
}

