#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    int n1 = sizeof(str1)/str1[0];
    int n2 = sizeof(str2)/str2[0];

    if(n1 == n2) {
        cout << "size of first string is equal to second string" << endl;
    }

    for(int i = 0 ; i<6 ; i++) {
        for(int j=0 ; j<i+1 ; j++) {
            if(str1[i] == str2[j]) {
                cout << "Two strings are anagrams" << endl;
            } else {
                cout << "the two are not anagrams" << endl;
            }
        }
    }

    return 0;
}