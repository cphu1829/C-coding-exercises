// TeamK_Exercise93.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arraySize;
    float total,average;
    string enterTestScore = "Enter test score 1: ";

    typedef int* intArrayPtr;
    intArrayPtr testScores;

    cout << "How many test scores will you enter? ";
    cin >> arraySize;

    testScores = new int[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << enterTestScore;
        cin >> testScores[i];

        if (testScores[i] < 0) {
            cout << "Negative scores are not allowed" << endl;
            i--;
            enterTestScore = "Enter another score for this test: ";
        }
        else {
            enterTestScore = " Enter test score " + to_string(i + 1) + ": ";
        }
    }

    for (int i = 0; i < arraySize; i++) {
        total += testScores[i];
    }

    average = total / arraySize;



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
