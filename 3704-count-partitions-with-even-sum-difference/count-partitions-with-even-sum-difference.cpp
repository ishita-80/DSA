class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        vector<int> pref(size+1,0);
        vector<int> suff(size+1,0);
        for(int i=1,j=size-1;i<size+1 && j>=0 ;i++,j--){
            pref[i]=pref[i-1]+nums[i-1];
            suff[j]=suff[j+1]+nums[j];
           // cout<< pref[i] <<" "<<suff[j];
        }
        for(int i=1;i<size;i++){
            if((abs(pref[i]-suff[i]) & 1 ) == 0) {
                count++;
               
            }
        }
        return count;

    }
};