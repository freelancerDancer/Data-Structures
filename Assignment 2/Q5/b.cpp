#include<iostream>
using namespace std;

int main() {
    int arr[4][4];
    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            if(i == j && i==j+1 && i==j-1) {
                cout << " Enter the element at" << "(" << i << j << ")" << endl;
                cin >> arr[i][j];
            } else {
                arr[i][j] = 0;
            }
        }
    }

    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            cout << arr[i][j];
        }
    }

    return 0;
}