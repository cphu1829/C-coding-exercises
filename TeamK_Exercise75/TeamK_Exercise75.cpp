// TeamK_Exercise75.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By Charles Phu and WongGong Son

#include <iostream>
using namespace std;

int main(){

    // initialization of variables needed 
    int numberOrdered;
    int shippingChargeChart[5][3] = {
        {1,50,20},
        {51,100,15},
        {101, 200, 10},
        {201,500,5},
        {501,999999,0}
    };

    // for user input
    cout << "Number ordered (Negative Number or 0 to end): ";
    cin >> numberOrdered;

    // while loop to check if number ordered is 0 or negative
    while (numberOrdered > 0) {
        for (int i = 0; i < 5; i++) {
            // checks to see if number ordered is between the minimum and maximum order amount
            if (numberOrdered >= shippingChargeChart[i][0] && numberOrdered <= shippingChargeChart[i][1]) {
                cout << "Shipping charge for a quantity of " << numberOrdered << " is $" << shippingChargeChart[i][2] << endl;
                break;
            }
            else {
                continue;
            }
        }
        cout << "\nNumber ordered (Negative Number or 0 to end): ";
        cin >> numberOrdered;
    }

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
