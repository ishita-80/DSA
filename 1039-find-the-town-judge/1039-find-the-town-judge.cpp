class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return n;
        vector<vector<int>>grp(n+1);
        unordered_map<int,int>mpp;
        for(int i=0;i<trust.size();i++){
               grp[trust[i][0]].push_back(trust[i][1]);
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<grp[i].size();j++){
                int ele=grp[i][j];
                mpp[ele]++;
                if(mpp[ele]==n-1){
                    if(grp[ele].size()==0) return ele;
                }
            }
        }
        return -1;

    }
};