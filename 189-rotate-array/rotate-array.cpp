class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        k=(n-k)%n;
        vector<int>temp(k);
        for(int i=0;i<k;i++){
            temp[i]=nums[i];
        }
        int index=0;
        for(;k<n;k++){
            nums[index]=nums[k%n];
            index++;

        }
        int i=0;
        while(index<n){
            nums[index]=temp[i];
            i++;
            index++;
        }
        return ;
    }
};