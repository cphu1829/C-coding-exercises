// TeamK_Exercise103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By Charles Phu and wongong Son

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userInput;
    int stringLength;

    cout << "Enter a sentence with no spaces between the words and the first letter of each word capitalized." << endl;
    cout << "(Example: StopAndSmellTheRoses):" << endl;

    getline(cin, userInput);

    stringLength = userInput.size();

    for (int i = 1; i < stringLength; i++) {
        if (isupper(userInput[i])) {
            userInput[i] = tolower(userInput[i]);
            userInput.insert(i, " ");
            stringLength++;
        }
    }

    cout << "output => " << userInput;

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
