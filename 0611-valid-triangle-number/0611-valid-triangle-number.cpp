class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0, n=nums.size()-1;
        for(int i=n;i>=2;i--){
        int left=0;
        int right=i-1;
        while(left<right){
            if(nums[left]+nums[right]>nums[i]){
                count+=(right-left);
                right--;
            }
            else {
                left++;
            }

        }
        }
        return count;
    }
};