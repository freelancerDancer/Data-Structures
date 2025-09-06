#include <iostream>
#include <vector>
using namespace std;

class stack {
    vector<int> vec;
public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if (!vec.empty()) {
            vec.pop_back();
        }
    }

    int top() {
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }

    bool isempty() {
        return vec.size() == 0;
    }
};

void printstack(stack &s) {
    while (!s.isempty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    printstack(s);

    return 0;
}
