class BrowserHistory {
    stack<string>bHis;
    stack<string>fwd;

public:
    BrowserHistory(string homepage) {
        bHis.push(homepage);
    }
    
    void visit(string url) {
        bHis.push(url);
        while(!fwd.empty()){
            fwd.pop();
        }
    }
    
    string back(int steps) {
        while(bHis.size()>1 && steps){
            fwd.push(bHis.top());
            bHis.pop();
            steps--;
        }
        return bHis.top();
    }
    
    string forward(int steps) {
       
        while(!fwd.empty() && steps){
            bHis.push(fwd.top());
            fwd.pop();      
            steps--;      
        }

         return bHis.top();
        
      

    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */