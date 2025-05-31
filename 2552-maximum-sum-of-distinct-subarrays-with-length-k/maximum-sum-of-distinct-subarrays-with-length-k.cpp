class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int>st;
        long long ans=0;
        long long sum=0;
        int left=0,right=0;
        while(right<nums.size()){
            if(st.find(nums[right])==st.end()){
                st.insert(nums[right]);
                sum+=nums[right];
                if(right-left+1==k){
                    ans=max(ans,sum);
                    st.erase(nums[left]);
                    sum-=nums[left];
                    left++;
                }
                right++;
            }
            else{
                while(st.find(nums[right])!=st.end()){
                    sum-=nums[left];
                    st.erase(nums[left]);
                    left++;
                }

            }
        }
        return ans;
    }
};