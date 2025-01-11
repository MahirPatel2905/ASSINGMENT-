/* Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid. */

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool isValidDate() {
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
            return false;

        // Handle months with 30 days
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        // Handle February
        if (month == 2) {
            bool isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
            if ((isLeap && day > 29) || (!isLeap && day > 28))
                return false;
        }

        return true;
    }

    void displayDate() {
        if (isValidDate())
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        else
            cout << "Invalid date!" << endl;
    }
};

int main() {
    Date date;
    int d, m, y;

    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    date.setDate(d, m, y);
    date.displayDate();

    return 0;
}




