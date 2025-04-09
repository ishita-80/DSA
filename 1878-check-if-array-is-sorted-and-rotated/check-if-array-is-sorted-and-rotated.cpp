class Solution {
public:
    bool check(vector<int>& nums) {
        int size=nums.size();
        bool flag=0;
        int count=0;
        for(int i=1;i<size;i++){
           if((nums[i-1]>nums[i]) &&(nums[0]>=nums[i])){
            flag=1;
            count++;
           }
           else if(flag==1){
            if((nums[0]<nums[i]) ||(nums[i-1]>nums[i]))return false;
           }
          else if((nums[i-1]>nums[i])&&(nums[0]<nums[i])) return false;
          

        }
        return count<=1;


    }
};