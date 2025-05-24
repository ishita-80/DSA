class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n= words.size();
        for(int i =0;i<n;i++){
            string ch =words[i];
            if(ch.find(x)!=string::npos){
                ans.push_back(i);
            }
        }
        return ans;
    }
};