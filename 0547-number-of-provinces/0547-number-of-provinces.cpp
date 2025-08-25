class Solution {
public:
    void solve(vector<vector<int>> &adj,int n,vector<bool> &visited,int node){
        if(visited[node]==true) return ;
        visited[node]=true;
       
        for(auto it:adj[node-1]){
            if(!visited[it+1]){
                solve(adj,n,visited,it+1);
            }
            

        }
        return ;


    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n);
        vector<bool>visited(n+1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }

            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i+1]){
                solve(adj,n,visited,i+1);
                count++;
            }
        }
       return count;;
    }
};