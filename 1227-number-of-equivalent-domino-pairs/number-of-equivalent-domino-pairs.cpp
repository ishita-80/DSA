class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n=dominoes.size();
        int count=0;
        map<pair<int,int>,int> mpp;
        mpp[{dominoes[0][0],dominoes[0][1]}]++;
        for(int i=1;i<n;i++){
            bool flag=0;
            pair<int,int>p = {dominoes[i][0],dominoes[i][1]};
            pair<int,int>rotatedPair={dominoes[i][1],dominoes[i][0]};
            
            if(mpp[rotatedPair]>0 &&(p.first != p.second)){
                count+=mpp[rotatedPair];
                mpp[rotatedPair]++;
                flag=1;

            }
            if(mpp[p]>0 ){
                count+=mpp[p];
                mpp[p]++;

            }
            else if(flag==0){
            mpp[p]++;
            }
        }
        return count;
    }
};