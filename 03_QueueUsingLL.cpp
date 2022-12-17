// Implement Queue using Linked list

#include <bits/stdc++.h>
using namespace std ;

class Queue {
    list<int> que;
    int counter;
public: 
    Queue(){
        counter = 0;
    }

    bool isEmpty(){
        return que.empty();
    }

    bool isFull (){
        if (counter >= 1000) {
            return true;
        }
        return false;
    }

    void push(int x) {
        if (isFull) return;
        que.push_back(x);
        ++counter;
    }

    int pop(){
        if (isEmpty()) return INT_MIN;
        int temp = que.front();
        que.pop_front();
        --counter;
        return temp;
    }
};

int main () {

    return 0;
}