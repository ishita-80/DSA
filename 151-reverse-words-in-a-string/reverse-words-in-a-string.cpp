class Solution {
public:
    string reverseWords(string s) {
        vector<string>updatedStringTOVector;
        for(int i=0;i<s.size();i++){
            string ans="";
            while(i<s.size() && s[i]!=' '){
                ans.push_back(s[i]);
                i++;
            }
            if(!ans.empty()){
            updatedStringTOVector.push_back(ans);
            }
        }
        reverse(updatedStringTOVector.begin(),updatedStringTOVector.end());
        string res;
        for(auto it:updatedStringTOVector){
            res+=it;
            res.push_back(' ');
        }
        res.pop_back();
        return res;

    }
};