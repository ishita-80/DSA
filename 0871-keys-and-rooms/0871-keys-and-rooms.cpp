class Solution {
public:
    void solve(vector<vector<int>>& rooms,vector<int>& ans,vector<bool>&visited,int node){
        if(visited[node]==true) return;
        ans.push_back(node);
        visited[node]=true;
        for(auto child:rooms[node]){
            solve(rooms,ans,visited,child);

        }
        return;

    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int size=rooms.size();
        vector<bool>visited(size);
        vector<int>ans;
        solve(rooms,ans,visited,0);
        
        if(size==ans.size()) return true;
        return false;
    }
};