class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0,right=0;
        int mapped[26]={0};
        int length=0;
        while(right<s.size()){
            char ch=s[right];
            mapped[ch-'a']++;
            if(mapped[ch-'a']>2){
                while(left<right){
                    mapped[s[left]-'a']--;
                    left++;
                    if(mapped[ch-'a']==2) break;
                }

            }
            else{
                length=max(length,right-left+1);
            }
            right++;
            

        }
        return length;
    }
};