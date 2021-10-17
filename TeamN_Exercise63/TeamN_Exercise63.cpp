// TeamN_Exercise63.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int getNumberOfRooms();
float getPaintPrice();
int getWallSquareFeet();
float numberOfGallons(int squareFeet);
float laborHours();
void displayCost();

float getPaintPrice() {
    float price;
    do {
        cout << "Enter the price of the paint, per gallon (must be greater than 10): ";
        cin >> price;
    } while (price < 10);

    return price;
}

int getNumberOfRooms() {
    int rooms;

    do {
        cout << "Enter the number of rooms to be painted (must be more than 1): ";
        cin >> rooms;
    } while (rooms < 1);

    return rooms;
}

int getWallSquareFeet() {
    int squareFeet;

    do {
        cout << "Enter the area of wall space in square feet: ";
        cin >> squareFeet;
    } while (squareFeet < 0);

    return squareFeet;
}

float numberOfGallons(int squareFeet) {
    int numGallons = squareFeet / 415;
    if (squareFeet % 415 > 0) {
        numGallons++;
    }
    return numGallons;
}

float laborHours(int squareFeet) {
    return squareFeet / 415.0 * 8.0;
}

void displayCost(int gallonsOfPaint, float hoursOfLabor, float pricePerGallon, float paintCost, float totalLabor, float totalCharges) {
    cout << fixed << setprecision(2) << left;
    cout << setw(20) << "Gallons of paint: " << gallonsOfPaint << endl;
    cout << setw(20) << "Hours of labor: " << hoursOfLabor << endl;
    cout << setw(20) << "Price per gallon: " << "$" << pricePerGallon << endl;
    cout << setw(20) << "Paint cost: " << "$" << paintCost << endl;
    cout << setw(20) << "Total labor: " << "$" << totalLabor << endl;
    cout << setw(20) << "Total charges: " << "$" << totalCharges << endl;
}

int main()
{
    float paintPrice = getPaintPrice();
    int numRooms = getNumberOfRooms();
    int totalSquareFeet = 0;

    for (int i = 1; i <= numRooms; i++){
        int squareFeet = getWallSquareFeet();
        totalSquareFeet += squareFeet;
    }

    float numGallons, laborHour, laborCharge, totalCost, paintCost;

    numGallons = numberOfGallons(totalSquareFeet);
    laborHour = laborHours(totalSquareFeet);
    laborCharge = laborHour * 18.0;

    paintCost = numGallons * paintPrice;
    totalCost = paintCost + laborCharge;


    cout << endl << "ESTIMATED CHARGES \n-------------" << endl;
    displayCost(numGallons, laborHour, paintPrice, paintCost, laborCharge, totalCost);

    return 0;
}

