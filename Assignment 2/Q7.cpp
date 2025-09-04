#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,3,6,5,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                count++;
            }
        }
    }

    cout << "Number of inversions are: " << count << endl;

    return 0;
}
