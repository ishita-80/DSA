class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        st.push("+");
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../" && st.top()!="+"){
                cout<<st.top();
                st.pop();
            }
            else if(logs[i]=="./") continue;
            else if(logs[i] != "../"){
                st.push(logs[i]);
                cout<<st.top();
            }
        
        }
        return st.size()-1;
    }
};