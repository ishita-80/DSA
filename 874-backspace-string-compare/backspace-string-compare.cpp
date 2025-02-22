class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(auto it:s){
            if(it=='#' && !st1.empty()){
                st1.pop();
            }
           else if(it!='#') st1.push(it);
        }
        for(auto it:t){
            if(it=='#' && !st2.empty()){
                st2.pop();
            }
             else if(it!='#') st2.push(it);
        }
        while(!st1.empty() && !st2.empty()){
            if(st1.top() == st2.top()) {
                st1.pop();
                st2.pop();
            }
            else {
                return false;
            }
        }
        if(!st1.empty() || !st2.empty()){
            return false;
        }
        return true;
    }
};