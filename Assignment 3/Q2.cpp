#include<iostream>
#include<stack>
using namespace std;

void reverseString(const string &input) {
    stack<char> st;

    for(char ch : input) {
        st.push(ch);
    }

    string reversed = "";
    while(!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    cout << "Original String: " << input << endl;
    cout << "Reversed String: " << reversed << endl;
}

int main() {
    string str = "DataStructure";
    reverseString(str);
    return 0;
}
