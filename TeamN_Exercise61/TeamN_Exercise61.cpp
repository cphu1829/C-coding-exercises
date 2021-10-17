// TeamN_Exercise61.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


string coinToss() {

    int number = rand() % 2 + 1;
    if (number == 1) {
        return "tails";
    }
    else if (number == 2) {
        return "heads";
    }

}

int main(){

    srand(time(0));

    int amntTosses;

    cout << "How many tosses should I make? ";
    cin >> amntTosses;

    for (int i = 1; i <= amntTosses; i++) {
        string type = coinToss();
        cout << i << ": " << type << endl;
    }
    return 0;
}
