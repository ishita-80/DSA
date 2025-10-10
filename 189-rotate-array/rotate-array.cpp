class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j=0;
        k=(k)%n;
        k=n-k;
        vector<int>arr(k);
        
        for(;i<k;i++){
            arr[i]=nums[i];
        }
        
        for(; i<n;i++){
            nums[j++]=nums[i];
        }
        i=0;
        for( ; j<n;j++){
            nums[j]=arr[i++];
        }
        return ;
    }
};