class Solution {
    // void reverseString(string &str){
    //     int s=0,e=str.size();
    //     while(s<e){
    //         swap(str[s++],str[e--]);
            
    //     }
    //     return ;
    // }
public:
    int minLength(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if((s[i] =='B' && st.empty()!=1 &&st.top()=='A') ||(s[i] =='D' && st.empty()!=1 &&st.top()=='C')){
                
                    st.pop();
                
            }
            else{
                st.push(s[i]);
            }
            
        }
        // string ans="";

        // while(st.empty()!=1){
        //     ans+=st.top();st.pop();
            
        // }
         //string is not asked
        // reverseString(ans);
        return st.size();
    }
};