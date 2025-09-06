#include<iostream>
using namespace std;

int main() {
    int temp[] = {73,74,75,71,69,72,76,73};
    int n = sizeof(temp)/sizeof(temp[0]);
    int ans[8] = {0}; 

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(temp[j] > temp[i]) {   
                ans[i] = j - i;
                break;  
            }
        }
    }

    for(int k=0; k<n; k++) {
        cout << ans[k] << " ";
    }

    return 0;
}
