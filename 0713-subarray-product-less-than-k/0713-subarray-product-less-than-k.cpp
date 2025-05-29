class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int size=nums.size();
        long long target=k;
        int count=0;
        for(int i=0;i<size;i++){
            long long product=1;
            for(int j=i;j<size;j++){
                product*=nums[j];
                if(product<target) count++;
                else break;

            }
        }
        return count;
    }
};