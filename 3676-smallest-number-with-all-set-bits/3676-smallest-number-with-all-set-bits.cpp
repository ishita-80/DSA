class Solution {
public:
    int smallestNumber(int n) {
        vector<int>arr;   
        int ans=0;

        while(n){
            int dig=n%2;
            arr.push_back(dig);
            n/=2;
        }
        int size=arr.size();
        while(size--){
            ans+=pow(2,size);
        }
       
       
      
        return ans;

    }
};