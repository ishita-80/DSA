class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        vector<int>v(n+1);
        v[0]=0;
        v[1]=cardPoints[0];
        for(int i=1;i<n;i++){
            v[i+1]=cardPoints[i]+v[i];
         }
        int ans=v[k],sum=0; 
        int lastIndex=n-1; 

        for(int i=k-1;i>=0 && lastIndex>=0;i--){
           
            sum=v[i]+v[n]-v[lastIndex];
           
            ans=max(ans,sum);
            cout<<ans<<" ";

            lastIndex--;
        }   
        return ans;
            
    }
};