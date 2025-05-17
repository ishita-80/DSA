class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int mapped[26]={0};
        int count=0;
        for(int i=0;i<text.size();i++){
            mapped[text[i]-'a']++;
        }
        while(mapped['b'-'a']!=0 && mapped['a'-'a']!=0 && mapped['l'-'a']>=2 && mapped['o'-'a']>=2 && mapped['n'-'a']!=0){
            count++;
            mapped['b'-'a']--;
            mapped['a'-'a']--;
            mapped['l'-'a']-=2;
            mapped['o'-'a']-=2;
            mapped['n'-'a']--;
        }
        return count;
    }
};