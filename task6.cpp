// PROBLEM:
// Simulating an aircraft's altitude changes based on user input

#include <iostream>

using namespace std;

int main() {
    double altitude = 0.0;
    double climbRate, descentRate;
    int choice;

    cout << "Aircraft Altitude Simulator" << endl;

    do {
        cout << "\nCurrent Altitude: " << altitude << " feet" << endl;
        cout << "1. Climb" << endl;
        cout << "2. Descend" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter climb rate (feet per minute): ";
                cin >> climbRate;
                altitude += climbRate / 60;
                break;
            case 2:
                cout << "Enter descent rate (feet per minute): ";
                cin >> descentRate;
                altitude -= descentRate / 60; 
                if (altitude < 0) {
                    altitude = 0;
                }
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 3);

    return 0;
}
