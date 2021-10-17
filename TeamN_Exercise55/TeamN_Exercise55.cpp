// TeamN_Exercise55.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int numFloors, numRooms, numOccupied;
    float occupancyRate, totalNumRooms, totalNumOccupied;

    cout << "How many floors does the hotel have? ";
    cin >> numFloors;
    while (numFloors < 1) {
        cout << "Number of floors must be greater than 0" << endl;
        cout << "How many floors does the hotel have? ";
        cin >> numFloors;
        
    }

    totalNumOccupied = 0.0;
    totalNumRooms = 0.0;

    for (int i = 1; i <= numFloors; i++) {
        if (i == 13) {
            continue;
        }
        else {
            do {
                cout << endl << "How many rooms are on floor " << i << "? ";
                cin >> numRooms;
                if (numRooms < 10) {
                    cout << "Number of Rooms must be greater than or equal to 10";
                }
            } while (numRooms < 10);


            totalNumRooms += numRooms;
            cout << "How many of those rooms are occupied? ";
            cin >> numOccupied;
            totalNumOccupied += numOccupied;
        }
    }

    occupancyRate = totalNumOccupied / totalNumRooms;

    cout << "The hotel has a total of " << totalNumRooms << " rooms." << endl;
    cout << totalNumOccupied << " are occupied." << endl;
    cout << totalNumRooms - totalNumOccupied << " are empty" << endl;
    cout << "The occupancy rate is " << fixed << setprecision(1) << occupancyRate;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
