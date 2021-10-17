//TeamK_Excercise101
// By Wongong Son and Charles Phu



#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string.h>

using namespace std;

//function prototypes
bool testPassWord(char[]);

int main()
{
	char passWord[20];

	cout << "Enter a password consisting of exactly 4 lower case letters and 6 digits:" << endl;

	do {

		
		cin.getline(passWord, 20);

		if (testPassWord(passWord)) {
			cout << "The number of lower case letters in the password is " << 4 << endl;
			cout << "The number of digits in the password is " << 6 << endl;
		}
		else
		{
			cout << "Invalid password. Please enter a password with exactly 4 lower case letters and 6 digits" << endl;
			cout << "For example, 1234abcd56 is valid. Please enter again:" << endl;

		}
	} while (testPassWord(passWord) == false);



	

	return 0;

}

bool testPassWord(char password[20])
{
	int letters = 0, digits = 0;

	for (int i = 0; i < strlen(password); i++) {

		if (isalpha(password[i]) && islower(password[i])) {
			letters++;
		}
		else if (isdigit(password[i])) {
			digits++;
		}
	}

	if (letters == 4 && digits == 6) {
		return true;
	}
	else {
		return false;
	}
}
	