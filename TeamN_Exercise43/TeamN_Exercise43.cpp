// TeamN_Exercise43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int weight, distance;
	float shippingRate, shippingCharge;

	cout << "Weight of the package in kilograms (max 20Kg): ";
	cin >> weight;

	if (weight <= 0) {
		cout << "Weight must be greater than 0 Kg";
		return 0;
	}
	else if (weight > 20) {
		cout << "Weight must be less than 20 Kg";
		return 0;
	}


	cout << "\nDistance the package is to be shipped (min 10 Mi, max 3000 Mi): ";
	cin >> distance;

	if (distance < 10) {
		cout << "We do not ship less than 10 miles";
		return 0;
	}
	else if (distance > 3000) {
		cout << "We do not ship more than 3000 miles";
		return 0;
	}


	if (weight <= 2) {
		shippingRate = 1.1;
	}
	else if (weight <= 6) {
		shippingRate = 2.2;
	}
	else if (weight <= 10) {
		shippingRate = 3.7;
	}
	else if (weight <= 20) {
		shippingRate = 4.8;
	}
	

	if (distance % 200 == 0) {
		shippingCharge = distance / 200 * shippingRate;
	}
	else {
		shippingCharge = (distance / 200 + 1) * shippingRate;
	}

	cout << "\nThe shpping charge is $" << fixed << setprecision(2) << shippingCharge;

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
