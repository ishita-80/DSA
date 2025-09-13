class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        int mapped[26]={0};
        int maxVowel=0, maxCons=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i]-'a';
           mapped[ch]++;
            if(isVowel(s[i])){
                maxVowel=max(maxVowel,mapped[ch]);
            }
            else{
                maxCons=max(maxCons,mapped[ch]);
            }
        }
        return maxVowel+maxCons;
    }
};