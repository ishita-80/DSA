class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        int n=path.size();
       int i=0;
        while(i<n){
         string s;
         s.push_back(path[i]);
         i++;
            while(i<n && path[i]!='/'){
                s.push_back(path[i]);
                i++;
            }
            if(s=="/." || s=="/"){
                continue;
            }
            else if(s=="/.."){
                if(!st.empty()){
                    st.pop();
                }
                
            }
            else{
                st.push(s);
            }
        }
        vector<string> ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        string finalAns;
        int size=ans.size();
        int index=0;
        while(index<size){
            finalAns+=ans[index];
            index++;
        }
        return finalAns==""?"/":finalAns;
    }
};