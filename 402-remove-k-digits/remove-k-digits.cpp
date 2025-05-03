class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string ans;
        for(int i=0;i<num.size();i++){
            while(!st.empty() && st.top()>num[i] && k){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        while(ans.size() && ans.back()=='0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans==""?"0":ans;


    }
};