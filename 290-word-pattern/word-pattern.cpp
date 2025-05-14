class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string >mpp;
        unordered_map<string, char>mpp2;
        int n=pattern.size();
        int m=s.size();
        int i=0,j=0;
        while(i<n && j<m){
            string ans="";
            while(j<m && s[j]!=' '){
                ans.push_back(s[j]);
                j++;
            }
            if(mpp.find(pattern[i])!=mpp.end() ){
                if(mpp[pattern[i]]!=ans) return false;

            }
            else{
                mpp[pattern[i]]=ans;
               
            }
             if(mpp2.find(ans)!=mpp2.end() ){
                if(mpp2[ans]!=pattern[i]) return false;

            }
            else{
                mpp2[ans]=pattern[i];
               
            }

            i++;j++;

        }
        if(i>=n && j>=m) return true;
        return false;
       

    }
};