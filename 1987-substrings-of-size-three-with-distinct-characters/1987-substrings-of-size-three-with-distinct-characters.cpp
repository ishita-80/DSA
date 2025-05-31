class Solution {
public:
    int countGoodSubstrings(string s) {
        int left=0,right=0;
        int count=0;
        unordered_set<char> st;
        while(right<s.size()){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);
                if(right-left+1==3){
                    st.erase(s[left]);
                    left++;
                    count++;
                }
                right++;
            }
            else{
                while(st.find(s[right])!=st.end() && left<right){
                    st.erase(s[left]);
                    left++;
                }

            }
            
        }
        return count;
    }
};