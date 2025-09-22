class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mapped[101]={0};
        int maxFreq=0,summation=0;
        for(int i=0;i<nums.size();i++){
            mapped[nums[i]]++;
            maxFreq=max(maxFreq,mapped[nums[i]]);
        }
        for(int i=1;i<101;i++){
            if(mapped[i]==maxFreq)summation+=maxFreq;
        }
        return summation;

    }
};