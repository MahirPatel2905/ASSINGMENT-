// Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include <iostream>
using namespace std;

class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;
     Base() {
        privateVar = 20;
        protectedVar = 40;
        publicVar = 60;
    }
	void showPrivateVar() {
        cout << "Private variable (Base): " << privateVar << endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
        cout << "Cannot access private variable (Base) in Derived class directly." << endl;
        cout << "Protected variable (Base): " << protectedVar << endl;
        cout << "Public variable (Base): " << publicVar << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << "Accessing members through Base class object:" << endl;
    baseObj.showPrivateVar(); 
	cout << "Public variable (Base): " << baseObj.publicVar << endl;
	cout << "\nAccessing members through Derived class object:" << endl;
    derivedObj.accessBaseMembers();

    return 0;
}

