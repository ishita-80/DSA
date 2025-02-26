class Solution {
public:
    void dfs(int s, vector<int> &vis,vector<vector<int>>graph){
        vis[s]=true;
        for(int i=0;i<graph.size();i++){
            if(graph[s][i]>0 && vis[i]==false){
                dfs(i,vis,graph);
            }
        }
        return;

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> visited(n);
        int ans=0;
        for(int i=0;i<n;i++){

           if( visited[i]==false){
            ans++;
            dfs(i,visited,isConnected);

           }


        }
        return ans;
    }
};