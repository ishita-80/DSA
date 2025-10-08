class Solution {
public:
    int bsfirst(vector<int>& nums,int &target,int s,int e){
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;

            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            

        }
        return ans;

    }
    int bslast(vector<int>& nums,int &target,int s,int e){
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;

            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            

        }
        return ans;

    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=0,last=0;
        int n=nums.size();
        int s=0,e=n-1;
        first=bsfirst(nums,target,s,e);
        last=bslast(nums,target,s,e);
        return {first,last};

        
    }
};