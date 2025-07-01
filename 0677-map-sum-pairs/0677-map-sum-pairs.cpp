class MapSum {
public:
    map<string,int>mpp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        
            mpp[key]=val;
        
    }
    
    int sum(string prefix) {
        int ans=0;
        for(auto it:mpp){
            string s=it.first;
            size_t pos = s.find(prefix);
            if(( pos !=string::npos ) &&(pos==0)){
                ans+=it.second;
            }
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */