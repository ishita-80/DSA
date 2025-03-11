class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,0);
        int right=0,left=0;
        int count=0,n=s.size();
        while(right<n){
            char ch=s[right];
            v[ch-'a']++;
            while(v[0]>0 && v[1]>0 && v[2]>0){
                count+=(n-right);
                char c=s[left];
                v[c-'a']--;
                left++;
                
            }
            right++;
        }
        return count;
    }
     };