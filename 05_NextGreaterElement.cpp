// Find the Next greater element for each item

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
    // For cyclic nums: 
public:
    vector<int> nextGreater(vector<int> &nums){
        stack<int> stk;
        int n = nums.size();
        vector<int> ans(n, -1);
        for (int i = 2 * (nums.size()) -1; i >= 0; --i)
        {
            int ind = i % nums.size();
            while(!stk.empty() && stk.top() <= nums[ind]){stk.pop();}
            if (!stk.empty()){ans[ind] = stk.top();}
            stk.push(nums[ind]);
        }
        return ans;
    }
};

class Solution
{
    // For non cyclic nums: 
public:
    vector<int> nextGreater(vector<int> &nums){
        stack<int> stk;
        int n = nums.size();
        vector<int> ans(n, -1);
        for (int i = nums.size()-1; i >= 0; --i)
        {
            while(!stk.empty() && stk.top() <= nums[i]){stk.pop();}
            if (!stk.empty()){stk.top();}
            stk.push(nums[i]);
        }
        return ans;
    }
};

int main()
{

    return 0;
}