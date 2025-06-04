class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>stt;
        int left=0,right=0;
        int maxSum=0;
        int sum=0;
        while(right<nums.size()){
            if(stt.find(nums[right])!=stt.end()){
               while(left<right && stt.find(nums[right])!=stt.end()){
                    sum-=nums[left];
                    stt.erase(nums[left]);
                    left++;
                }
                
            }
                sum+=nums[right];
                maxSum=max(sum,maxSum);
                stt.insert(nums[right]);
                right++;

        }
        return maxSum;
    }
};