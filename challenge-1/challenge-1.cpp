//
//  challenge-1.cpp
//  GWC: Challenge #1
//
//  Created by Yanilette Montano on 9/26/24.
//

#include <iostream>
using namespace std;
int main() {
    int num;
    int size;
    int carry = 1;
    
    cout << "Enter size of integer: ";
    cin >> size;
    
    int arr[size + 1];
    
    cout << "Enter given size multi-digit integer: ";
    cin >> num;
    
    for(int i = size - 1; i >= 0; i--){
        arr[i] = num % 10;
        num /= 10;
    }
    cout << "Originial Array: [";
    for(int j = 0; j <= size - 1; j++){
        cout << arr[j];
        if (j < size - 1) {
                    cout << ", ";
                }
    }
    cout << "]" << endl;

        
        for (int i = size - 1; i >= 0; i--) {
            arr[i] += carry;
            if (arr[i] == 10) {
                arr[i] = 0;
                carry = 1;
            } else {
                carry = 0;
                break;
            }
        }

        if (carry == 1) {
            cout << "New Array: [1, ";
            for (int j = 0; j < size; j++) {
                cout << arr[j];
                if (j < size - 1) {
                    cout << ", ";
                }
            }
            cout << "]" << endl;
        } 
        else {
    
            cout << "New Array: [";
            for (int j = 0; j < size; j++) {
                cout << arr[j];
                if (j < size - 1) {
                    cout << ", ";
                }
            }
            cout << "]" << endl;
        }
        
    
    return 0;
}
