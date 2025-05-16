class Solution {
private:
    string checkPalindrome(string &s){
        int start=0,end=s.size()-1;
        while(start<end){
            if(s[start]!=s[end]) return "";
            start++;
            end--;
        }
        return s;
    }    
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            ans=checkPalindrome(words[i]);
            if(!ans.empty()) return ans;
        }
        return ans;;
    }
};