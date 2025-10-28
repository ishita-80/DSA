class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int mini=INT_MAX;
         int maxProfit=0;
         for(int i=0;i<prices.size();i++){
            if(mini>prices[i]) mini=prices[i];
            int sub=prices[i]-mini;
            maxProfit=max(maxProfit,sub);
         }
         return maxProfit;
    }
};