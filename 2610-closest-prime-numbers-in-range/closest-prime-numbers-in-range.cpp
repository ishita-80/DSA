class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>storePrime;
        //if the vector is empty and we do v.size()-1 it gives us a 
        // garbage value which eventually leads to failure of edge cases
       // cout<<storePrime.size()-1;
        vector<int>ans(2,-1);
        if(left<2){
            left=2;
        }        
       // if(!(left&1) ) left++;
        if(left>=right) return ans;
        for(long long i=left;i<=right;i=i+1){
           // cout<<"hi";
            bool flag=0;
            for(long long j=2;j*j<=i;j++){
                if(i%j==0){
                    flag=1;
                    break;

                } 
            }
            if(!flag) {
                
                storePrime.push_back(i);
            }

        }
        //cout<<storePrime.size()-1;
       
        int diff=INT_MAX;
        if(storePrime.size()>0){
        for(int i=0;i<storePrime.size()-1;i++){
            int currdiff=storePrime[i+1]-storePrime[i];
            if(currdiff<diff){
                diff=currdiff;
               // cout<<ans[0]<<ans[1]<<" ";
                ans[0]=storePrime[i];
                ans[1]=storePrime[i+1];
            }
        }}
        return ans;
    }
};