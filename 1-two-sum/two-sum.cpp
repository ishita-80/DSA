class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int> ans;
        mp[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            int findEle=target-nums[i];
            if(mp.find(findEle)!=mp.end()){
                ans.push_back(mp[findEle]);
                ans.push_back(i);
                break;
            }
            mp[nums[i]]=i;

        }
        return ans;

    }
};