#include <iostream>
using namespace std;

int findMissing(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] != arr[i] + 1) {
            return arr[i] + 1; // first missing number
        }
    }
    return -1; // if nothing is missing
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number: " << findMissing(arr, n) << endl;

    return 0;
}
