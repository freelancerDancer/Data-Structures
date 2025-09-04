#include<iostream>
using namespace std;

int main() {
    int arr[] = {0,1,0,2,0,1,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ; i<n ; i++) {
        for(int j = i+1 ; j<n ; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i] , arr[j]);
            }
        }
    }

    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}