class MinStack {
public:
    vector<pair<int,int>>v;
  

    MinStack() {
        
    }
    
    void push(int val) {
        int mini=val;
     
        if(v.size()>0 && v.back().second<mini){
            v.push_back({val,v.back().second});
        }
        else{
            v.push_back({val,val});
        }
        
    }
    
    void pop() {
       
        v.pop_back();

    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */