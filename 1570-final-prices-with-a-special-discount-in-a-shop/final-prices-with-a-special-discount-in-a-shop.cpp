class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
         stack<int>st;
         st.push(-1);
         int n=prices.size();
         vector<int>final(n);
         for(int i=n-1;i>=0;i--){
            int curr=prices[i];
            while(st.top()>curr){
                st.pop();
            }
            if(st.top()==-1){
                final[i]=curr;
                st.push(curr);
            }
            else{           
            final[i]=curr-st.top();
            st.push(curr);
            }
            

         }
         return final;
         
    }
};