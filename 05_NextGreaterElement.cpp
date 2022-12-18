// Find the Next greater element for each item

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    // For non cyclic nums: 
public:
    vector<int> nextGreater(vector<int> &nums){
        stack<int> stk;
        vector<int> ans;
        for (int i = nums.size()-1; i >= 0; --i)
        {
            while(!stk.empty() && stk.top() <= nums[i]){stk.pop();}
            if (stk.empty()){ans[i] = -1;}
            else {ans[i] = stk.top();}
            stk.push(nums[i]);
        }
        return ans;
    }
};

int main()
{

    return 0;
}