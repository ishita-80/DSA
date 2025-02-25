class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n,0);
        if(arr[0]&1) dp[0]=1;
       long long ans=dp[0];
       long long modu=1e9+7;
        for(int i=1;i<n;i++){
            if(!(arr[i]&1)){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=i+1-dp[i-1];
            }
            ans=(ans+dp[i])%modu;
        }
        return ans%modu;
    }
};