class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mpp;
        int i=0;
        int minLen=INT_MAX;
        while(i<cards.size()){
            if(mpp.find(cards[i])!=mpp.end()){
                minLen=min(minLen,i-mpp[cards[i]]+1);

            }
             mpp[cards[i]]=i;
             i++;
        }
        return minLen==INT_MAX?-1:minLen;
    }
};