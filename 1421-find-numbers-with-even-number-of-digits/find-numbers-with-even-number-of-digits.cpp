class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenNumberCount=0;
        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            int count=0;
            while(ele){
                count++;
                ele/=10;
            }
            if((count&1)==0){
                evenNumberCount++;
            }
        }
        return evenNumberCount;
    }
};