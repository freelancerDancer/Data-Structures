#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int output[n];

    for (int i = 0; i < n; i++) {
        output[i] = -1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                output[i] = arr[j];
                break; 
            }
        }
    }

    cout << "Next Smaller Elements: ";
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
