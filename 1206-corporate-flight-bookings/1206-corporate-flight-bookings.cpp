class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
       vector<int>prefixSum(n,0);
       for(vector<int>& it:bookings){
        int start=it[0];
        int end=it[1];
        int add=it[2];
        for(int i=start;i<=end;i++){
            prefixSum[i-1]+=add;
        }

       }
       return prefixSum;
    }
};