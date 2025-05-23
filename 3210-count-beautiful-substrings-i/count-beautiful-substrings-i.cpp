class Solution {
private:
    bool isVowel(char &ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }    
public:
    int beautifulSubstrings(string s, int k) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
             int vowelFreq=0;
             int consonantFreq=0;
            for(int j=i;j<n;j++){
               if(isVowel(s[j])) vowelFreq++;
               else consonantFreq++;
        if((vowelFreq==consonantFreq)&&((vowelFreq*consonantFreq)%k==0)) {
            count++;

            }
        }
        }
        return count;
    }
};