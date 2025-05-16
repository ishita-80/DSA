class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int mapped[50000]={0};
        int len=0;
        int maxFreq=0,storeNum=0;
         int left=0,right=0;
        
        for(int i=0;i<nums.size();i++){
            mapped[nums[i]]++;
            if(maxFreq<mapped[nums[i]]){
                maxFreq=mapped[nums[i]];
                storeNum=nums[i];
            }

        }
        vector<int>degreeVector;
        for(int i=0;i<50000;i++){
            if(mapped[i]==maxFreq && i!=storeNum){
                degreeVector.push_back(i);
            }
        }
       
        while(left<nums.size()){
            if(nums[left]!=storeNum){
                left++;
            }
            else break;
        }
        right=left;
        while(right<nums.size()){
            if(nums[right]==storeNum){
                maxFreq--;
            }
            if(maxFreq==0){
                len=right-left+1;
                break;
            }
            right++;


        }
        if(degreeVector.size()==0) return len;
        for(int i=0;i<degreeVector.size();i++){
            int maxFreq=mapped[degreeVector[i]];
            int ele=degreeVector[i];
            int left=0,right=0;
            while(left<nums.size()){
            if(nums[left]!=ele){
                left++;
            }
            else break;
        }
        right=left;
        while(right<nums.size()){
            if(nums[right]==ele){
                maxFreq--;
            }
            if(maxFreq==0){
               len= min(len,right-left+1);
                break;
            }
            right++;


        }
        }
        return len;
    }
};