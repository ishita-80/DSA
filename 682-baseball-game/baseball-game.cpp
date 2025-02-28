class Solution {
    bool isDigit(string &op){
        int n=op.size();
        return (isdigit(op[n-1]));

    }
    //a number can be greater or smaller than 9 ,0 respectively
    // int convertStringToInt(string& op){
    //     char ch=op[0];
    //     return ch-'0';
    // }
public:

    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(isDigit(operations[i])){
                int x=stoi(operations[i]);
                st.push(x);
            //    cout<<st.top();
            }
            else if(operations[i]=="+"){
                int num1=st.top();st.pop();
                int num2=st.top();st.pop();
                st.push(num2);
                st.push(num1);
                st.push(num1+num2);
               // cout<<st.top();

            }
            else if(operations[i]=="D"){
                int num=2*st.top();
                st.push(num);
               // cout<<st.top();

            }
            else if(operations[i]=="C"){
                st.pop();
               // if(st.empty()!=1) cout<< st.top();
            }
        }
        int summation=0;
        while(st.empty()==0){
          
            summation+=st.top();
            //  cout<<summation;
            st.pop();
        }
        return summation;
    }
};