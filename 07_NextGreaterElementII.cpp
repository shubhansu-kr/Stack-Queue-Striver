// https://leetcode.com/problems/next-greater-element-ii/description/

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);
        stack<int> stk;
        for (int i = 2 * nums.size()-1; i >= 0; --i)
        {
            int index = i % nums.size();
            while(!stk.empty() && stk.top() <= nums[index]) stk.pop();
            if (!stk.empty()) ans[index] = stk.top();
            stk.push(nums[index]);
        }
        return ans;
    }
};

int main () {
    
    return 0;
}