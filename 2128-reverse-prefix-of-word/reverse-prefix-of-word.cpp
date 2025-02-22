class Solution {
public:
    void reversePart(string &word,int s, int e){
        while(s<e){
            swap(word[s++],word[e--]);
        }
        return;
    }
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int end=-1;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                end=i;
                break;
            }
        }
        if(end==-1) return word;
        reversePart(word,0,end);
        return word;
    }
};