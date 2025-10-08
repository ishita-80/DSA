class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,end=nums.size()-1;
        int mid=(end+s)/2;
        int ans=0;
        while(s<=end){
            mid=(end+s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target){
                end=mid-1;
                ans=mid;
            }
            else {
                s=mid+1;
                ans=s;
            }
        } 
        return ans;
    }
};