class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return nums;
        int i=0,j=1;
        while(i<=n-2 && j<=n-1){
            if(nums[i]==nums[j]){
                nums[i]*=2;
                nums[j]=0;
                i+=2;
                j+=2;
            }
            else{
                i++;
                j++;
            }
        }
        int count=0;
         vector<int>ans(n);
         int idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
            count++;
        }
        else{
            ans[idx]=(nums[i]);
            idx++;
        }
        }
      
       for(int i=n-count;i<n;i++){
        ans[idx]=(0);
        idx++;
       }
       return ans;
    }
};