class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left=0;
        int size=nums.size();
        if(size==1) return false;
        while(left<size){
            int right=left+1;
            while(right<size){
                if(right-left<=k){
                    if(nums[right]==nums[left]){
                        return true;
                    }
                    right++;
                }
                else {
                    break;
                }

            }
            left++;
        }
        return false;
    }
};