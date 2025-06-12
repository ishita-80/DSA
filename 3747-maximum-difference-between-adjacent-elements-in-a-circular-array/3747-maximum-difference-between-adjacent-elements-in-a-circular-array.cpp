class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int diff=0,size=nums.size();
        for(int i=1;i<size;i++){
            diff=max(diff,abs(nums[i]-nums[i-1]));
        }
         diff=max(diff,abs(nums[0]-nums[size-1]));
         return diff;

    }
};