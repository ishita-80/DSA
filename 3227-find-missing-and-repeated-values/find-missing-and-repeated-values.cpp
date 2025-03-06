class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();    
        int sizeOfMap=n*n+1;    
       vector<int> mapped(sizeOfMap,0);
        vector<int>ans(2,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 mapped[grid[i][j]]++;
                if(mapped[grid[i][j]]==2) ans[0]=grid[i][j];
            }
        }
        for(int i=1;i<sizeOfMap;i++){
           if( mapped[i]==0) ans[1]= i;
        }
        return ans;
    }
};