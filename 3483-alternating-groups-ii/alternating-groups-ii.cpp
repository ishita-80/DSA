class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        
        for(int i=0;i<k-1;i++){
            colors.push_back(colors[i]);

        }
        int n=colors.size(),cnt=0;
        int left=0,right=1;
        while(right<n){
            if(colors[right]==colors[right-1]){
                left=right;
                right++;
                continue;
            }
            if(right-left+1==k) cnt++,left++;
            right++;
        }
        return cnt;

    }
};