class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string,int> mpp;
        vector<string> str;
            str.push_back(".-");
            str.push_back("-...");
            str.push_back("-.-.");
            str.push_back("-..");
            str.push_back(".");
            str.push_back("..-.");
            str.push_back("--.");
            str.push_back("....");
            str.push_back("..");
            str.push_back(".---");
            str.push_back("-.-");
            str.push_back(".-..");
            str.push_back("--");
            str.push_back("-.");
            str.push_back("---");
            str.push_back(".--.");
            str.push_back("--.-");
            str.push_back(".-.");
            str.push_back("...");
            str.push_back("-");
            str.push_back("..-");
            str.push_back("...-");
            str.push_back(".--");
            str.push_back("-..-");
            str.push_back("-.--");
            str.push_back("--..");
        for(auto it:words){
            string toPush="";
            for(int i=0;i<it.size();i++){
                char ch=it[i];
                int index=ch-'a';
                toPush+=str[index];
            }
            mpp[toPush]++;
        }   
        
        
        return mpp.size();
    }
 };