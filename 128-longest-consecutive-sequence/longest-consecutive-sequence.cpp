class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>mpp;
        int ans=0,count=0,lastEle=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mpp.insert(nums[i]);
        }
        for(auto it:mpp){
           // cout<<it<<" ";
            if(lastEle==INT_MIN){
                lastEle=it;
                count++;
                ans=max(count,ans);
            }
            else {
                if(lastEle+1==it && count>0){
                    count++;
                    ans=max(count,ans);
                    lastEle=it;

                }
                else {
                    count=1;
                    lastEle=it;
                }
                
            }

        }
        return ans;

    }
};