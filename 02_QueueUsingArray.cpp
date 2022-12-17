// Implement Queue using array

#include <bits/stdc++.h>
using namespace std;

class Queue{
private: 
    vector<int> que;
    int f, r;
public: 
    Queue(){
        f = -1;
        r = 0;
        que = vector<int> (1000, -1);
    }

    bool isEmpty(){
        return f == -1;
    }
    bool isFull(){
        if (r == f) return true;
    }

    void push(int x){
        if (isFull) {
            return;
        }
        que[r++] = x;
        r %= 1000;
    }

    int pop() {
        if (isEmpty()) return INT_MIN;
        int temp = que[f];
        f = (f+1) % 1000;

        if (f == r) {
            f = -1;
            r = 0;
        }
    }
};

int main()
{

    return 0;
}