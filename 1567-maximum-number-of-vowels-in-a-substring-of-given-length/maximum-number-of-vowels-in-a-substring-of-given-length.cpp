class Solution {
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') return true;
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int countVowel=0;
        int maxCount=0;
        int left=0,right=0;
        while(right<s.size()){
            if(isVowel(s[right])) countVowel++;
            
            if(right-left+1==k){
                maxCount=max(maxCount,countVowel);
                if(isVowel(s[left])) countVowel--;
                left++;

            }
            right++;
            
        }
        return maxCount;
    }
};