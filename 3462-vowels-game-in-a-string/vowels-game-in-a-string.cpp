class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }
    
    bool doesAliceWin(string s) {
        for(auto it:s){
            if(isVowel(it)){
                return true;
            }
        }
        return false;
    }
};