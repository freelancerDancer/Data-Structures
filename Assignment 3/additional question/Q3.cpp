#include<iostream>
#include<stack>
using namespace std;

class specialstack {
    stack<int> s;
    stack<int> minstack;
    public:
        void push(int x) {
            s.push(x);

            if(minstack.empty() || x <= minstack.top()) {
                minstack.push(x);
            } else {
                minstack.push(minstack.top());
            }
        }

        int pop() {
            if(s.empty()) {
                return -1;
            } else {
                s.pop();
            }
        }

        int peek() {
            return s.top();
        }

        int getmin() {
            if(minstack.empty()) {
                return -1;
            } return minstack.top();
        }
};