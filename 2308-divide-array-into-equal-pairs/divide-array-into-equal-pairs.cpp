class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int mapped[501]={0};
        for(auto num:nums){
            mapped[num]++;
        }
        for(int i=1;i<501;i++){
            if(mapped[i]&1==1){
                return false;
            }
        }
        return true;
    }
};