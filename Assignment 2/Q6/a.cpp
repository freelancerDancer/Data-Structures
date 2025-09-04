#include<iostream>
using namespace std;

int main() {
    int arr[3][3];
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            cout << "enter the elements" << endl;
            cin >> arr[i][j];
        }
    }

    for(int i=0 ; i< 3 ; i++) {
        for(int j=0 ; j< 3 ; j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            cout << arr[i][j] << endl;
        }
    }

    return 0;
}