class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int right=0;
        while(right<arr.size()){
            if(arr[right]&1){
                count++;
                if(count==3) return true;
            }
            else count=0;
            right++;
        }

        return count>=3;
    }
};