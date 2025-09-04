#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << "Enter element at position (" << i << "," << j << "): ";
                cin >> arr[i][j];
            } else {
                arr[i][j] = 0; 
            }
        }
    }

    cout << "\nThe 3x3 diagonal matrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
