// Stack Implementation Using Array

#include <bits/stdc++.h>
using namespace std;

// We can implement stack using dynammic array: vector.
// Maintain an index named tp {initial value: -1, otherwise pointitng to tp}
class Stack
{
private:
    int tp;
    vector<int> stk;

public:
    Stack() { tp = -1; }
    Stack(int x)
    {
        tp = 0;
        stk.emplace_back(x);
    }

    bool isEmpty()
    {
        return tp == -1;
    }
    bool isFull()
    {
        // Let's fix the max Size of stack be 1000.
        return stk.size() >= 1000;
    }
    int top()
    {
        if (isEmpty())
            return INT_MIN;
        return stk[tp];
    }
    int pop()
    {
        if (isEmpty())
            return INT_MIN;
        return stk[tp--];
    }
    void push(int x)
    {
        if (isFull())
            return;
        stk[++tp] = x;
    }
};

int main()
{

    return 0;
}