// Least Recently used cache

#include <bits/stdc++.h>
using namespace std;

// DataMembers:
//      1. (Key, value) : Actual store of the val
//      2. size : Max size of the LRU cache
// MemberFunctions:
//      1. Get(key): Returns the value assosiated with key if present else -1
//      2. put(key, value): Insert key and value pair, If the size is full
//         we have to remove the least recently used key value pair and then
//         insert the new key value.
//      && Use is determined by get and put fxn. Everytime someone uses get, it increases
//         the use counter for the respective key.

struct Dll
{
    int val, k;
    Dll *next, *prev;
    Dll() : next(nullptr), prev(nullptr), val(-1){};
    Dll(int a, int b) : next(nullptr), prev(nullptr), k(a), val(b){};
};

class LRU
{
    int size;
    Dll *head, *tail;
    unordered_map<int, Dll *> mp;

public:
    // default constructor
    LRU()
    {
        head = new Dll();
        tail = new Dll();
        head->next = tail;
        tail->prev = head;
    }
    // Constructor: Initialie with max size of LRU
    LRU(int size) : size(size)
    {
        head = new Dll();
        tail = new Dll();
        head->next = tail;
        tail->prev = head;
    }

    // get(key)
    int get(int &kee)
    {
        // return -1 if key does not exit
        if (!mp.count(kee))
            return -1;

        // if key exists, return val and update priority queue
        Dll *p = mp[kee];

        // Remove the node
        p->prev->next = p->next;
        p->next->prev = p->prev;

        // Add to front pos
        p->next = head->next;
        head->next = p;
        p->next->prev = p;
        p->prev = head;

        return p->val;
    }

    // put(key, val)
    void put(int kee, int val)
    {
        if (mp.count(kee))
        {
            // just update the priority
            Dll *p = mp[kee];

            // Remove the node
            p->prev->next = p->next;
            p->next->prev = p->prev;

            // Add to front pos
            p->next = head->next;
            head->next = p;
            p->next->prev = p;
            p->prev = head;

            return;
        }

        // create node
        Dll *p = new Dll(kee, val);

        p->next = head->next;
        head->next = p;
        p->next->prev = p;
        p->prev = head;

        mp[kee] = p;

        if (mp.size() <= size)
            return;

        // Delete the last node if the size exceeds
        p = tail->prev;
        p->prev->next = tail;
        tail->prev = p->prev;

        mp.erase(p->k);
        return;
    }
};

int main()
{

    return 0;
}