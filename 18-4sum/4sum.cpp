class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(i>0 &&(nums[i]==nums[i-1]))continue;
            bool flag=0;
            for(int j=i+1;j<n-1;j++){        
                 if((j>1) &&(nums[j]==nums[j-1]) && (flag==1))continue;     
                int left=j+1;
                int right=n-1;
                 while(left<right){                
                   long long int sum=nums[i]+nums[j];
                   sum+=nums[left]+nums[right];
                    if(sum==target) {
                        flag=1;
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                    while((left<right) && (nums[left]==nums[left+1])){
                        left++;
                       // cout<<i<<left;
                    }
                   // cout<<" ";
                    
                     while((left<right )&& (nums[right]==nums[right-1])){
                     right--;
                    //  cout<<"left";
                    //  cout<< right;
                     }
                     left++;
                     right--;

                }
                if(sum>target) right--;
                if(sum<target) left++;
            
                 }
            
        }
        }
        return ans;

    }
};