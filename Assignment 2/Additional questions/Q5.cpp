#include <iostream>
using namespace std;

int main() {
    int arr[20] = {1, 2, 3, 5, 6}; 
    int n = 5;                     
    int num, pos;

    cout << "Enter the number to insert: ";
    cin >> num;

    cout << "Enter the position (0-based index): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    for(int i=0 ; i<n ; i++) {
        if(arr[i] == 0) {
            arr[pos] = 0;
            n++;
        }
    }

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
