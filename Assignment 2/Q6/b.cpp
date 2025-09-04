#include<iostream>
using namespace std;

int main() {
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];

    // Input for first array
    cout << "Enter elements for first 3x3 array:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }

    // Input for second array
    cout << "Enter elements for second 3x3 array:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr2[i][j];
        }
    }

    // Sum of two matrices
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display result
    cout << "Resultant Matrix (arr1 + arr2):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
