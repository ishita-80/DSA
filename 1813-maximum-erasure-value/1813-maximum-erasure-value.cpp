class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int l=0,r=0;
        int ans=0,sum=0;
        
        while(r<nums.size()){
            bool flag=0;
            if(mpp.find(nums[r])==mpp.end()){
                mpp[nums[r]]++;
                sum+=nums[r];
                ans=max(ans,sum);
                flag=1;
            }
            else {
                while(l<nums.size() && l<=r){
                    mpp.erase(nums[l]);
                    sum-=nums[l];
                    l++;
                    if(mpp.find(nums[r]) == mpp.end()){
                        cout<<"hi";
                        break;
                    }

                }
            }
            if(flag) r++;

        }
        ans=max(ans,sum);
        return ans;

    }
};