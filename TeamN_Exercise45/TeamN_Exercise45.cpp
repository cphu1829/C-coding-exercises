// TeamN_Exercise45.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Team N Charles Phu and Prasiddh Pooskur

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    float distance, totalTime, speed;
    string endingString;

    cout << "Select a medium: \n1.Air \n2.Water \n3.Steel";
    cout << "\n\nEnter your choice: ";    
    cin >> choice;
    while (choice < 1 && choice > 3) {
        cout << "Selection must be 1, 2, or 3";
        cin >> choice;
    }

    cout << "\nEnter the distance: ";
    cin >> distance;
    while (distance < 0) {
        cout << "Distance must be greater than or equal to 0";
        cin >> distance;
    }
    // supposed to stop code here

    switch (choice) {
    case 1:
        speed = 1100.0;
        endingString = " feet through air.";
        break;
    case 2:
        speed = 4900.0;
        endingString = " feet through water.";
        break;
    case 3:
        speed = 16400;
        endingString = " feet through steel.";
        break;
    default:
        cout << "Invalid Choice";
        break;
    }

    totalTime = distance / speed;

    cout << fixed << setprecision(4) << "A sound wave takes " << totalTime << " seconds to travel " << distance << endingString;
    
    return 0;

}

