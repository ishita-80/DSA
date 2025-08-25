class Solution {
public:
    void solve(bool &ans,vector<bool>&visited,vector<vector<int>>& list,int src, int dest){
        if(src==dest) {
            ans=true;
            return;
        }
        if(visited[src]==true) return ;
        visited[src]=true;
        for(auto child:list[src]){
            solve(ans,visited,list,child,dest);

        }
        return;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>list(n);
        for(int i=0;i<edges.size();i++){
           
            list[edges[i][0]].push_back(edges[i][1]);
            list[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>visited(n);
        bool ans=false;
        solve(ans,visited,list,source,destination);
        return ans;
    }
};