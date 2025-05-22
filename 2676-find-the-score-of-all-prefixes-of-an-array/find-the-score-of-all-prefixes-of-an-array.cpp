class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> ans(n,0);
        int maxi=nums[0];
        ans[0]=nums[0]+maxi;
        for(int i=1;i<n;i++){
            maxi=max(maxi,nums[i]);
            ans[i]=ans[i-1]+nums[i]+maxi;
        }
        return ans;
    }
};