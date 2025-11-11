#include<iostream>
#include<vector>
using namespace std;

class heap {
    vector<int> vec;
public:
    void heapify(int i) {
        int l = (2*i+1);
        int r = (2*i+2);
        int maxidx = i;

        if(l < vec.size() && vec[l] > vec[ maxidx]) {
            maxidx = l;
        }
        if(r < vec.size() && vec[r] > vec[maxidx]) {
            maxidx = r;
        }

        if(maxidx != i) {
            swap(vec[i] , vec[maxidx]);
            heapify(maxidx);
        }
    }

    void push(int val) {
        vec.push_back(val);

        int x = vec.size() - 1;
        int parI = (x-1)/2;

        while(parI >= 0 && vec[x] > vec[parI]) {
            swap(vec[x] , vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }
    }

    int top() {
        if(vec.empty()) {
            return -1;
        }

        return vec[0];
    }

    bool isempty() {
        return vec.empty();
    }

    void pop() {
        if(vec.empty()) {
            return ;
        }

        swap(vec[0] , vec.back());
        vec.pop_back();
        heapify(0);
    }
    void print() {
        for(int val : vec) {
            cout << val << " " << endl;
        }
        cout << endl;
    }
};

int main() {
    heap h;
    h.push(10);
    h.push(5);
    h.push(20);
    h.push(15);

    cout << "Heap: ";
    h.print();

    cout << "Top: " << h.top() << endl;

    h.pop();
    cout << "After pop: ";
    h.print();

    return 0;
}