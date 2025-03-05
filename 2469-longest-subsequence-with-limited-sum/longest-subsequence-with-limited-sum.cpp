class Solution {
    int findLS(int targetVal,vector<int>& pS,int size){
        int i=size;
        while(targetVal<pS[i]){
            i--;
        }
        return i;
    }
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),m=queries.size();
        vector<int> prefixSum(n+1,0);
        vector<int> answer(m);
        for(int i=0;i<n;i++){
            prefixSum[i+1]=prefixSum[i]+nums[i];
        }
        for(int i=0;i<m;i++){
            int targetVal=queries[i];
            int ans=findLS(targetVal,prefixSum,n);
            answer[i]=ans;

        }
        return answer;
    }
};