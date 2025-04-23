class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(st.size()>1 && s[st.top()]=='('){
                st.pop();
                maxi=max(maxi,i-st.top());

            }
            else{
                st.push(i);
            }
        }
        return maxi;
    }
};