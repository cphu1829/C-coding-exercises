// TeamK_Exercise76.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By Charles Phu and Wongong Son (Team K)

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    //declaring variables
    vector<float> weight;
    float temp;
    float totalWeight = 0, maxWeight, averageWeight;

    //getting user input and putting into vector
    for (int i = 1; i < 6; i++) {
        cout << "Enter weight " << i << ": ";
        cin >> temp;
        weight.push_back(temp);
    }
    
    cout << endl;
    // printing out all numbers with 2 decimal places
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << fixed << setprecision(2) << weight.at(i) << " ";
    }

    //calculating max weight, average weight, and total weight
    maxWeight = weight.at(0);
    for (int i = 0; i < 5; i++) {
        totalWeight += weight.at(i);
        
        if (weight.at(i) > maxWeight) {
            maxWeight = weight.at(i);
        }
    }

    averageWeight = totalWeight / 5;

    // printing out max weight, average weight, and total weight
    cout << "\n\nTotal Weight: " << totalWeight << endl;
    cout << "Average Weight: " << averageWeight << endl;
    cout << "Max Weight: " << maxWeight << endl;

    return 0;
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
