class Solution {
private:
    void upperToLower(string &s){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z') {
                s[i]=tolower(s[i]);
            }
        }
        return ;
    }    
public:
    bool isPalindrome(string s) {
        int start=0,end=s.size()-1;
        upperToLower(s);
        cout<<s;
        while(start<end){
            while(start<end && ((!isdigit(s[start])) && !(s[start]>='a'&& s[start]<='z'))){
                start++;

            }
            while(start<end && ((!isdigit(s[end])) && !(s[end]>='a'&& s[end]<='z'))){
                end--;

            }
            if(s[end]!=s[start]) return false;
           start++;
           end--;

        }
        return true;
    }
};