class Solution {
public:
    bool check(vector<int>& nums) {
        int i=1,n=nums.size();
        bool flag=1;
        while(i<nums.size()){
            if(nums[i-1]<=nums[i] && flag) i++;
            else if(nums[i-1]>nums[i] || flag==0){
                if(nums[0]>=nums[i] && flag){
                    i++;
                    flag=0;
                }
                else if(flag==0 && nums[0]>=nums[i] && nums[i-1]<=nums[i]){
                    i++;

                } 
                else return false;
            }
            else return false;

        }
        return true;
    }
};