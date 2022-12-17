// Implement Stack Using linked list

#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    list<int> stk;
    int counter;

public:
    Stack()
    {
        counter = 0;
    }
    bool isEmpty()
    {
        return stk.empty();
    }
    bool isFull()
    {
        return counter >= 1000;
    }
    int pop()
    {
        if (isEmpty())
        {
            return INT_MIN;
        }
        stk.pop_back();
        --counter;
    }
    void push(int x)
    {
        if (isFull())
        {
            return;
        }
        stk.push_back(x);
        ++counter;
    }
    int size()
    {
        return counter;
    }
};

int main()
{

    return 0;
}