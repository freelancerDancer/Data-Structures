#include<iostream>
using namespace std;

int main() {
    int arr[3][3];
    for(int i=0; i<3 ; i++) {
        for(int j=0; j<3 ; j++) {
            if(i==j && i<j) {
                cout << "Enter the elements of the matrix";
                cin >> arr[i][j];
            } else {
                arr[i][j] = 0;
            }
        }
    }

    return 0;
}