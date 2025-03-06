class StockSpanner {
public:
    vector<int> v;
    stack<pair<int,int>>st;
    // v.push_back(0);
    StockSpanner() {
        
    }
    
    int next(int price) {
        v.push_back(price);
        int size=v.size();
        int ans=1;
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }
        if(!st.empty()){
            ans=size-st.top().second;
        }
        else{
            ans=size;
        }
          st.push({price,size});

       // if(st.size()==1) return ans;
        // else{
        
        // cout<<ans<<" ";
        //}
        return ans;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */