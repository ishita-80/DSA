class Solution {
public:
    //Binary search nhi lga shkte bcoz array sorted nhi h
    
    // int BS(vector<int>& nums,int k,int s,int e){
    //    while(s<=e){
    //     int mid=s+(e-s)/2;
    //     if(nums[mid]==k) return mid;
    //     else if(nums[mid]>k){
    //         e=mid-1;

    //     }
    //     else if(nums[mid]<k){
    //         s=mid+1;
    //     }
    //    }
    //    return s;
        
    // }
    int LS(vector<int>& nums,int k,int s,int e){
        for(int i=s;i<=e;i++){
            if(nums[i]==k) {
                return i;
                break;
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
       vector<int> ans(n1);
       vector<int> nextGreater(n2);
       stack<int>st;
       st.push(-1);
       for(int i=n2-1;i>=0;i--){
        while(st.top()!=-1 && st.top()<=nums2[i]){
            st.pop();
        }
        
        nextGreater[i]=st.top();
        st.push(nums2[i]);
       }
    //    for(int i=0;i<n2;i++){
    //     cout<<nextGreater[i];
    //    }

       for(int i=0;i<n1;i++){
        int ele=nums1[i];
        int index=LS(nums2,ele,0,n2-1);
       // cout<<ele<<index<<" ";
        ans[i]=nextGreater[index];

       }
       return ans;
    }
};