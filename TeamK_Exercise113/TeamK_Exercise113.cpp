// TeamK_Exercise113.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


struct customer {
    string Name;
    string Address;
    string City;
    string State;
    string ZIP;
    string PhoneNumber;
    string AccountBalance;
    string LastPaymentDate;

};

void printMenu() {
    cout << "1. Enter new account information" << endl;
    cout << "2. Change account information" << endl;
    cout << "3. Display all account information" << endl;
    cout << "4. Exit the program" << endl;
}

int getEmptyPosition(customer customers[10]) {
    for (int i = 0; i < sizeof(customers); i++) {
        if (customers[i].Name == "") {
            return i;
        }
        else {
            return 10;
        }
    }
}

void choice1(customer customers[10], int pos) {
    
    cout << "Customer name: ";
    string temp;
    getline(cin,temp);
    getline(cin, customers[pos].Name);
    cout << "Customer address: ";
    getline(cin, customers[pos].Address);
    cout << "City: ";
    getline(cin, customers[pos].City);
    cout << "State: ";
    getline(cin, customers[pos].State);
    cout << "ZIP Code: ";
    getline(cin, customers[pos].ZIP);
    cout << "Telephone: ";
    getline(cin, customers[pos].PhoneNumber);
    cout << "Account balance: ";
    getline(cin, customers[pos].AccountBalance);
    cout << "Date of last payment: ";
    getline(cin, customers[pos].LastPaymentDate);
    cout << "You have entered information for customer number " << pos << endl << endl;

}
void choice2(customer customers[10]) {
    int pos;
    cout << "Customer number: ";
    cin >> pos;
    cout << "Customer name: ";
    string temp;
    getline(cin, temp);
    getline(cin, customers[pos].Name);
    cout << "Customer address: ";
    getline(cin, customers[pos].Address);
    cout << "City: ";
    getline(cin, customers[pos].City);
    cout << "State: ";
    getline(cin, customers[pos].State);
    cout << "ZIP Code: ";
    getline(cin, customers[pos].ZIP);
    cout << "Telephone: ";
    getline(cin, customers[pos].PhoneNumber);
    cout << "Account balance: ";
    getline(cin, customers[pos].AccountBalance);
    cout << "Date of last payment: ";
    getline(cin, customers[pos].LastPaymentDate);
    cout << "You have entered information for customer number " << pos << endl << endl;
}
void choice3(customer customers[10]) {
    int pos;
    cout << "Customer number: ";
    cin >> pos;
    cout << "Customer name: " << customers[pos].Name << endl;
    cout << "Customer address: " << customers[pos].Address << endl;
    cout << "City: " << customers[pos].City << endl;
    cout << "State: " << customers[pos].State << endl;
    cout << "ZIP Code: " << customers[pos].ZIP << endl;
    cout << "Telephone: " << customers[pos].PhoneNumber << endl;
    cout << "Account balance: " << customers[pos].AccountBalance << endl;
    cout << "Date of last payment: " << customers[pos].LastPaymentDate << endl;
}


int main()
{
    customer customers[10];
    int userChoice;

    do {
        printMenu();
        cin >> userChoice;
        cout << endl;

        int pos = getEmptyPosition(customers);

        if (userChoice == 1) {
            choice1(customers, pos);
        }
        else if (userChoice == 2) {
            choice2(customers);
        }
        else if (userChoice == 3) {
            choice3(customers);
        }

    } while (userChoice >= 1 && userChoice <= 3);
    



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
