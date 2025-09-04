class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        // vector<float>ans(n);
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        float mini=INT_MAX;
        while(i<j){
            float avg=(((float)nums[i])+nums[j])/2;
            // ans[i]=avg;
            mini=min(mini,avg);
            i++,j--;
        }
        return mini;


    }
};