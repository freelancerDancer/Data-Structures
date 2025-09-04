#include<iostream>
using namespace std;

int main () {
    int arr[] = {1,1,1,2,3,3,4,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    bool visited[n] = {false};  
    int duplicates = 0;

    for(int i=0; i<n; i++) {
        if(visited[i]) continue;  

        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        if(count > 1) {
            duplicates++;
        }
    }

    cout << "Number of duplicate numbers: " << duplicates << endl;

    return 0;
}
