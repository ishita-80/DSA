class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int nextIndex=-1,n=word.size();
        for(int i=0;i<n;i++){
            st.push(word[i]);
            if(word[i]==ch){
                nextIndex=i+1;
                break;
            }
        }
         if(nextIndex==-1) return word;
        string s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
       
        s+=word.substr(nextIndex,n);
        return s;
    }
};