class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int leng=INT_MAX;
        int sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            if(sum>=target){
                leng=min(leng,right-left+1);
                while(left<right && sum>target){
                    sum-=nums[left];
                    left++;
                    if(sum>=target){
                     leng=min(leng,right-left+1);
                     }
                }
            }
            right++;

        }
        return leng==INT_MAX? 0 : leng;

    }
};