#include<iostream>
#include<stack>
using namespace std;

int main() {
    int arr1[] = {2, 4, 1243, 4, 1342};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[5] = {0};
    stack<int> s;
    
    for(int i=0; i<n; i++) {
        s.push(arr1[i]);
    }

    for(int i=0; i<n; i++) {
        arr2[i] = s.top();
        s.pop();
    }

    for(int i=0; i<n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
