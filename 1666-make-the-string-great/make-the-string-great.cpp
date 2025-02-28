class Solution {
    void reverseString(string &s){
        int start=0,e=s.size()-1;
        while(start<e){
            swap(s[start++],s[e--]);

        }
        return ;
    }
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()!=1 && abs(st.top()-s[i])==('a'-'A')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(st.size()){
            ans+=st.top();st.pop();
        }
        reverseString(ans);
        return ans;
    }
};