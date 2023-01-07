// https://leetcode.com/problems/next-greater-element-i/

#include <bits/stdc++.h>
using namespace std ;




class Solution {
    // BruteForce: Find the index and then search for next greater element
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (int i = 0; i < nums1.size(); i++)
        {
            int nxtGreater = -1;
            int flag = 0;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    flag = 1;
                    continue;
                }
                if (flag)
                {
                    if (nums2[j] > nums1[i])
                    {
                        nxtGreater = nums2[j];
                        break;
                    }
                }
            }
            arr.push_back(nxtGreater);
        }
        return arr;
    }
};

int main () {
    
    return 0;
}