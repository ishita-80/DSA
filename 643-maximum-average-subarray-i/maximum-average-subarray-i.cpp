class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avgSum=INT_MIN;
        int left=0,right=0;
        double sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            if(right-left+1>k){
                sum-=nums[left];
                left++;
            }
            
             if(right-left+1==k){
                avgSum=max(avgSum,sum/k);
            }
            right++;

        }
        return avgSum;

    }
};