class Solution {
public:
    int firstUniqChar(string s) {
        int mapped[26]={0};

        for(int i=0;i<s.size();i++){
            mapped[s[i]-'a']++;

        }
        //queue<char>q;
        for(int i=0;i<s.size();i++){
            if(mapped[s[i]-'a']>1) continue;
            return i;
        }
        return -1;
    }
};