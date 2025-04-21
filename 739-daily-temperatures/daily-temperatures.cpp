class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size=temperatures.size();
        stack<int>st;
        st.push(0);
        vector<int>ans(size);
        for(int i=size-1;i>=0;i--){
            int curr=temperatures[i];
            while(!st.empty() && temperatures[st.top()]<=curr && st.top()!=0){
                    st.pop();
                }
            if(st.top()==0){
                 ans[i]=st.top();
                }
            else{
                ans[i]=st.top()-i;
            }    
            
             st.push(i);       
 
        }
          return ans;
    }
};