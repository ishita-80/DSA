class Spreadsheet {
public:
    unordered_map<string,int>mpp;
    Spreadsheet(int rows) {
        
    }
    
    void setCell(string cell, int value) {
        mpp[cell]=value;
        return;
    }
    
    void resetCell(string cell) {
        mpp[cell]=0;
        return;
    }
    
    int getValue(string formula) {
        int num1=0,num2=0;
       
            string s1="";
            string s2="";
            int i=1;
            while(formula[i]!='+'){
                s1+=formula[i];
                i++;
            }
            i++;
            while(i<formula.size()){
                s2+=formula[i];
                i++;
            }
            if(isdigit(s1[0])){
                 num1=stoi(s1);

             }
            else if(mpp.find(s1)!=mpp.end()){
                num1=mpp[s1];

            } 
            if(isdigit(s2[0])){
               num2=stoi(s2);
               
            }
            else if( mpp.find(s2)!=mpp.end()){
                num2=mpp[s2];
            }
            return num1+num2;

        
        
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */