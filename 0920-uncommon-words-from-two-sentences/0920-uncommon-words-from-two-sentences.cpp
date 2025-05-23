class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mpp;
        vector<string>ans;
        int i=0,j=0;
        int size1=s1.size(),size2=s2.size();
        while(i<size1){
            string s="";
            while(i<size1 && s1[i]!=' '){
                s.push_back(s1[i]);
                i++;

            }
            mpp[s]++;
            i++;

        }

        while(j<size2){
            string s="";
            while(j<size2 && s2[j]!=' '){
                s.push_back(s2[j]);
                j++;

            }
            mpp[s]++;
            j++;

        }
        for(auto it:mpp){
            if(it.second==1) ans.push_back(it.first);
        }
        return ans;
    }
};