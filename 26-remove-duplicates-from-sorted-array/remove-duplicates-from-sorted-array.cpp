class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n=nums.size();
       int index=1;
       int i=1;
       while(i<n){
        if(nums[index-1]!=nums[i]){

            nums[index]=nums[i];
            index++;
        }
        i++;
       } 
       return index;
    }
};