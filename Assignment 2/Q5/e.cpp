#include<iostream>
using namespace std;

int main() {
    int arr[3][3];
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            if(i==j) {
                cout << "Enter the elements on diagonals" << endl;
                cin >> arr[i][j];
            } else {
                if(i != j) {
                    cout << "Enter the elements :";
                    cin >> arr[i][j];
                    arr[i][j] = arr[j][i];
                }
            }
        }
    }

    return 0;
}