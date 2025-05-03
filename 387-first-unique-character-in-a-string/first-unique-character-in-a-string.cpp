class Solution {
public:
    int firstUniqChar(string s) {
        queue<pair<char,int>>q;
        int freq[26]={0};
        int indexOfAns=0;
        
        for(int i=0;i<s.size();i++){
            bool flag=0;
            freq[s[i]-'a']++;
            q.push({s[i],i});
            while(!q.empty()){
                char frontChar=q.front().first;
                if(freq[frontChar-'a']>1){
                    q.pop();
                }
                else{
                    indexOfAns=q.front().second;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                indexOfAns=-1;
            }
            
            
        }
        return indexOfAns;
    }
};