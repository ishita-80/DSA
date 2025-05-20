class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int size1=word1.size();
        int size2=word2.size();
        string ans="";
        while(i<size1 && j<size2){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++,j++;
        }
        if(i<size1){
            ans+=word1.substr(i,size1);
        }
        if(j<size2){
            ans+=word2.substr(j,size2);
        }
        return ans;
    }
};