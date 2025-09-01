class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[edges[i][0]]++;
            mpp[edges[i][1]]++;
            if(mpp[edges[i][0]]==n){
                return edges[i][0];
            }
            else if(mpp[edges[i][1]]==n){
                return edges[i][1];
            }
        }
        return -1;
    }
};