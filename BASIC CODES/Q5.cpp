//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;   
    int age;        
    string country;

public:
    void setDetails(string personName, int personAge, string personCountry) {
        name = personName;
        age = personAge;
        country = personCountry;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Person person1; 

    string name;
    int age;
    string country;
    
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter country: ";
    getline(cin, country);

    person1.setDetails(name, age, country);

    cout << "\nPerson Details:\n";
    person1.displayDetails();

    return 0;
}

