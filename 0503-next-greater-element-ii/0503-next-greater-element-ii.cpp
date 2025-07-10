class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size=nums.size();
        int n=(2*size)-1;
        vector<int> ans(size);
        stack<int>st;
        
        while(n>=0){
            int index=n%size;
            while(!st.empty()&& nums[index]>=st.top()){
                st.pop();
            }
            if(n<size){
                ans[n]=st.empty()? -1 : st.top();
            }
            st.push(nums[index]);
            n--;
        }
        return ans;
    }
};