class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxCnt=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;
                maxCnt=max(count,maxCnt);
            }
            else if(s[i]==')'){
                st.pop();
                count--;
            }
            

        }
        return maxCnt;
    }
};