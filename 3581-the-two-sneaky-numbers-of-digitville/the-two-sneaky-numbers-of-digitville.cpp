class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int mapped[101]={0};
       vector<int> arr;
       for(int i=0;i<nums.size();i++){
        mapped[nums[i]]++;
        if(mapped[nums[i]]==2){
            arr.push_back(nums[i]);
        }
        
       }
       return arr;

    }
};