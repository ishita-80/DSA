class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int ans=0;
        int sizeOfSentence=sentence.size();
        int sizeOfPre=searchWord.size();
        for(int i=0;i<sizeOfSentence;i++){
            string word="";
            int index=0;
            bool flag=1;
            while(i<sizeOfSentence && sentence[i]!=' '){
                word.push_back(sentence[i]);
                i++;
            } 
            ans++;           
            while(index<sizeOfPre){
                if(word[index]!=searchWord[index]){
                    flag=0;
                    break;
                } 
                index++;
            }
            if(flag) return ans;
        }
        return -1;
    }
};