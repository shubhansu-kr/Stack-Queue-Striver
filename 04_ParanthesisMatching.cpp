// Check if given expression has valid parenthesis or not 

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public: 
    bool isValidParenthesis(string &s){
        stack<char> stk;
        for(auto &it: s){
            if (it == '(') stk.push(it);
            else if (it == ')'){
                if (stk.empty()) return false;
                else {
                    if (stk.top() == '(') stk.pop();
                    else return false;
                }
            }
            else {/* pass */}
        }
        return stk.empty();
    }
};

int main () {
    
    return 0;
}