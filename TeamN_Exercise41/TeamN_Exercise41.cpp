// TeamN_Exercise41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float item1Price, item2Price, totalPrice;

    cout << "What is Item 1's price? ";
    cin >> item1Price;
    cout << "\nWhat is Item 2's price? ";
    cin >> item2Price;

    if (item1Price > item2Price) {
        item2Price *= 0.5;
    }
    else if (item2Price < item1Price) {
        item1Price *= 0.5;
    }

    totalPrice = item1Price + item2Price;
      
    cout << "\nTotal: " << fixed << setprecision(2) << totalPrice;

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
