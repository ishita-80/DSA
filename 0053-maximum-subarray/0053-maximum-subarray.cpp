class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int left=0,right=0;
        int n=nums.size();
        int maxSum=0,sum=0;
        while(right<n){
            
            if(sum<0){
                while(left<right && sum<0 && sum<nums[right]){
                    sum-=nums[left];
                    left++;
                }
            }
            sum+=nums[right];
            if(right==0)maxSum=sum;
            else{
                maxSum=max(maxSum,sum);

            }
            right++;
            
            
       

        }
        
        return maxSum;
    }
};