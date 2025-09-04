#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int arr[]  = {1,4,1,4,5};
    int count = 0;
    int dif = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ; i<n ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            if(abs(arr[i] - arr[j]) == dif) {  // ✅ use dif here
                count++;
            }
        }
    }

    cout << "Number of pairs : " << count << endl;

    return 0;
}
