class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        int mapped[256]={0};
        int count=0;
        bool flag=1;
        int maxLenStore=0;
        for(int i=0;i<s.size();i++){
            mapped[s[i]]++;

        }
        for(int i=0;i<256;i++){
            if((mapped[i]&1)==0){
                count+=mapped[i];
            }
            else if((mapped[i]&1)&& flag ){
                flag=0;
                count+=mapped[i];
              //  cout<<mapped[i];
            }
            else if((mapped[i]&1)&& flag==0){
                count--;
                count+=mapped[i];
            }

        }
        return count;


    }
};