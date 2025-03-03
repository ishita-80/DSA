class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size(),cnt=0;
        vector<int> resultant(n);
        int ptr=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                resultant[ptr++]=nums[i];
            }
            else if(nums[i]==pivot){
                cnt++;
            }

        }
        while(cnt){
            resultant[ptr++]=pivot;
            cnt--;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                resultant[ptr++]=nums[i];
            }
        }
        return resultant;
    }
};