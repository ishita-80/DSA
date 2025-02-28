class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        st.push(-1);
        int n=prices.size();
        vector<int> nextSmallEqualEle(n);
        for(int i=n-1;i>=0;i--){
            while(st.top()!=-1 && st.top()>prices[i] ){
                st.pop();
            }
             nextSmallEqualEle[i]=st.top();
             st.push(prices[i]);
            
        }
        for(int i=0;i<n;i++){
            if(nextSmallEqualEle[i]!=-1){
            nextSmallEqualEle[i]=prices[i]-nextSmallEqualEle[i];
            }
            else{
                nextSmallEqualEle[i]=prices[i];
            }
        }
        return nextSmallEqualEle;
    }
};