class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int ans=0;
        for(auto ch:s){
            if(ch=='('){
                st.push(ch);
                ans++;
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    ans--;
                }
                else{
                    st.push(ch);
                    ans++;
                }
            }
        }
        return ans;
    }
};