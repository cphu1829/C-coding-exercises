// TeamN_Exercise33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int fatCalories, fatPercentage, totalCalories, gramsOfFat; 

    cout << "What are the total calories? ";
    cin >> totalCalories;
    cout << "What are the grams of fat? ";
    cin >> gramsOfFat;

    fatCalories = gramsOfFat * 9;
    fatPercentage = static_cast<float>(fatCalories) / (totalCalories) * 100;

    cout << endl << "Fat calories: " << fatCalories << endl;
    cout << "Fat percentage: " << fixed << setprecision(0) << fatPercentage << "%" << endl;

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
