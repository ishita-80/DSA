class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==']'){
                string str;
                string num;
                while(st.top()!="["){
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                while(!st.empty() && isdigit(st.top()[0])){
                    num+=st.top();
                    st.pop();

                }
                reverse(num.begin(),num.end());
                int numOfRepeat=stoi(num);
                string finalString;
                while(numOfRepeat){
                    finalString+=str;
                    numOfRepeat--;
                }
                st.push(finalString);

            }
            else{
                string toPushString;
                toPushString+=s[i];
                
                st.push(toPushString);
            }
        
        }
        string ans;
       // if(!st.empty()) ans+=st.top(); st.pop();
        while(st.size()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};