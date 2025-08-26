class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
        vector<bool>visited(n);
        vector<vector<int>>list(n);
        for(int i=0;i<edges.size();i++){
           
            list[edges[i][0]].push_back(edges[i][1]);
            list[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        q.push(source);
        visited[source]=true;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto it:list[front]){
                if(!visited[it]){
                    if(it==destination) return true;
                    visited[it]=true;
                    q.push(it);
                }

            }

        }
        return false;
    }
};