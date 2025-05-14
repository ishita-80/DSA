class Solution {
public:
    int countSegments(string s) {
        int count=0;
        char space=' ';
        for(int i=0;i<s.size();i++){
            while(i<s.size() && s[i]!=space){
                i++;
            }
            if(i>0 && s[i-1]!=space)count++;
        }
        return count;
    }
};