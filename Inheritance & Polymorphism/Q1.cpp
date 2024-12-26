/* Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int matchesPlayed;
public:
    void inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Number of Matches Played: ";
        cin >> matchesPlayed;
    }
	 void displayCricketerData() {
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() {
        inputCricketerData();
        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
        cout << "Enter Best Performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }
	void calculateAverageRuns() {
        if (matchesPlayed != 0)
            averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
        else
            averageRuns = 0;
    } void displayData() {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman b1;
	cout << "Enter details of the batsman:" << endl;
    b1.inputData();
	cout << "\nBatsman Details:" << endl;
    b1.displayData();

    return 0;
}

