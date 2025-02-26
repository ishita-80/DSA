class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>prePro(n+1);
        vector<int>suffPro(n+1);
        vector<int> ans(n);
        int i=1,j=n-1;
      // int pro=1,pro1=1;
       prePro[0]=1;
       suffPro[n]=1;
        while(i<n+1 && j>=0){
            prePro[i]=prePro[i-1]*nums[i-1];
            i++;
            suffPro[j]=suffPro[j+1]*nums[j];
            j--;
        }
        for(int i=0;i<n;i++){
            int answer=prePro[i]*suffPro[i+1];
            ans[i]=answer;
        }
        return ans;


    }
};