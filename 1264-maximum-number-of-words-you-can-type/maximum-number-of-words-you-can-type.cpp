class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        bool flag=1;
        int mapped[26]={0};
        for(int i=0;i<brokenLetters.size();i++){
            mapped[brokenLetters[i]-'a']++;
        }
        for(int i=0;i<text.size();i++){
            if(text[i]==' ') {
                if(flag) count++;
                else flag=1;
            }
            else if(mapped[text[i]-'a']) flag=0;   



        }
        if(flag) count++;
        return count;
    }
};