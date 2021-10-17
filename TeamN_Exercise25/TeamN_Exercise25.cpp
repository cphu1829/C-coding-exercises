// TeamN_Exercise25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number1 = 28;
    int number2 = 32;
    int number3 = 37;
    int number4 = 24;
    int number5 = 33;

    int sum = number1 + number2 + number3 + number4 + number5;
    float average = float(sum) / 5;

    cout << "Number 1 is " << number1 << endl;
    cout << "Number 2 is " << number2 << endl;
    cout << "Number 3 is " << number3 << endl;
    cout << "Number 4 is " << number4 << endl;
    cout << "Number 5 is " << number5 << endl;

    cout << "The sum is " << sum << endl;
    cout << "The average is " << average;
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
