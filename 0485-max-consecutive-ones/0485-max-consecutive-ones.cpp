class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0;
        int left=0,n=nums.size();
        int right=0;
        while(left<n && right<n){
            if(nums[left]==1){
                while(right<n && nums[right]) right++;
                len=max(len,right-left);
                left=right;
            }
            else left++,right++;
        }
        return len;
    }
};