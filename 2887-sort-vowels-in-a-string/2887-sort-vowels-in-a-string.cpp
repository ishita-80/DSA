class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        string t="";
        string sortVowel="";
        int size=s.size();
        for(int i=0;i<size;i++){
            if(isVowel(s[i])){
                sortVowel.push_back(s[i]);
            }
        }
        sort(sortVowel.begin(),sortVowel.end());
        int index=0;
        for(int i=0;i<size;i++){
            if(!isVowel(s[i])){
                t.push_back(s[i]);
            }
            else{
                t.push_back(sortVowel[index++]);
            }
        }
        return t;

    }
};