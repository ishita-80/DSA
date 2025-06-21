class RecentCounter {
    queue<int>q;

public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        //insert
        q.push(t);
        //removal
        while(!q.empty() && q.front()<(t-3000)){
            q.pop();
        }
        return q.size();

    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */