#include <iostream>
#include <vector>

using namespace std;
int main() {
	int sizeofVector;
	cout << "Input how many digits your number has:";
	cin >> sizeofVector;
	int counter = 0;

	vector<int> multiDigit(sizeofVector);

	for (int i = 0; i < sizeofVector; i++) {
		if (i == 0)
			cout << "Input first digit: ";
		else
			cout << "Input next digit: ";
		cin >> multiDigit[i];
	
		if (i == sizeofVector - 1)
			multiDigit[i] += 1;

	}

	
	for (int i = sizeofVector -1; i >= 0 && multiDigit[i] == 10; --i){
		multiDigit[i] = 0;
		if (i == 0) {
			multiDigit.push_back(0);
			multiDigit[i] = 1;
		}
		else
		multiDigit[i - 1] += 1;
		
	}


	cout << "[";
	for (int i = 0; i < multiDigit.size(); i++) {

		if (i == multiDigit.size())
			cout << multiDigit[i];
		else
			cout << multiDigit[i] << ",";
	}

	cout << "]";

	return 0;
}