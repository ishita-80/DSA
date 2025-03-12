class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negCnt=0,posCnt=0;
        int n=nums.size();
        int s=0,e=n-1;
        int ans1=-1,ans2=-1,cnt=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]<0){
                ans1=mid;
                s=mid+1;
            }
            else if(nums[mid]>0){
                e=mid-1;
            }
            if(nums[mid]==0){
                cnt++;
                e=mid-1;
            }
        }
        ans1>-1?negCnt=ans1+1:negCnt=0;
        
        s=0,e=n-1;
         while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>0){
                ans2=mid;
                e=mid-1;
                
            }
            else if(nums[mid]<0){
              s=mid+1;
            }
            if(nums[mid]==0){
                cnt++;
                s=mid+1;
            }
        }
        ans2>-1?posCnt=n-ans2:posCnt=0;
        
        return max(negCnt,posCnt);

    }
};