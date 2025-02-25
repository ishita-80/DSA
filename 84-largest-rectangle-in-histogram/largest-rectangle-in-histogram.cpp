class Solution {
    void  findPrevSmaller(vector<int> &prevSmall,vector<int>& heights,int n){
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            prevSmall[i]=st.top();
            st.push(i);
        }
        return;
    }
    void findNextSmaller(vector<int> &nextSmall,vector<int> &heights,int n){
        stack<int>st;
        st.push(n);
        for(int i=n-1;i>=0;i--){
            //index ko height s compare kr rhe the phle
            //equal wala case consider nhi kia tha-->sirf heights wale 
            //case me hi to area km hoga equal me to badiya kaam karega 
            while(st.top()!=n && heights[st.top()]>=heights[i]){
                st.pop();
            }
            nextSmall[i]=st.top();
            st.push(i);
        }
        return ;
    }
public:

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> prevSmall(n);
        vector<int>nextSmall(n);
        findPrevSmaller(prevSmall,heights,n);
        findNextSmaller(nextSmall,heights,n);
        for(auto i:nextSmall) {
            cout<< i;
            }
        cout<<endl;
        for(auto i:prevSmall) cout<<i;

        int area=0;
        for(int i=0;i<n;i++){
            
            int currArea=heights[i]*(nextSmall[i]-prevSmall[i]-1);
            area=max(area,currArea);
        }
        return area;
    }
};