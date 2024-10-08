// Elsa Vosganian
// GWC LAPC Challenge #1: This program allows a user to input single-digit numbers 
// into an array and increments the array as if it was a multi-digit number
// October 8th 2024

#include <iostream>

using namespace std;

void displayArray(int array[]) {
	cout << "[" << array[0] << ", " << array[1] << ", " << array[2] << "]" << endl;
}

int main() {
	int numArray[3];
	char menuChoice = 'y';

	while (menuChoice != 'n' and menuChoice != 'N') {
		cout << "-.* Array Incrementor *.-\n"
			 << "-------------------------" << endl;

		cout << "Please enter first number: ";
		cin >> numArray[0];
		cout << "Please enter second number: ";
		cin >> numArray[1];
		cout << "Please enter third number: ";
		cin >> numArray[2];

		cout << "\nArray before incrementing:\t";
		displayArray(numArray);

		++numArray[2];

		if (numArray[2] > 9) {

			numArray[2] = 0;
			++numArray[1];

			if (numArray[1] > 9) {

				numArray[1] = 0;
				++numArray[0];

				if (numArray[0] > 9) {
					cout << "\tERROR: Number is larger than the limits of the array" << endl;
					numArray[0] = 0;
				}
			}
		}

		cout << "Array after incrementing:\t";
		displayArray(numArray);

		cout << "\nWould you like to input another number? (Y/N): ";
		cin >> menuChoice;

		cout << endl;
	}

	cout << "Ending program..." << endl;

}
