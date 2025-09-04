#include <iostream>
using namespace std;

void binarysearch(int *arr, int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Key found at index: " << mid << endl;
            return; // stop once found
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << "Key not found" << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Key to be found: ";
    cin >> key;

    binarysearch(arr, n, key);

    return 0;
}
