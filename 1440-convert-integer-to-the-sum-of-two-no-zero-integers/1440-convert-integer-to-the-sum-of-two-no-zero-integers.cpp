class Solution {
public:
    bool check(int &a,int &b){
        int num1=a;
        int num2=b;
        while(num1 && num2){
            int dig1=num1%10;
            int dig2=num2%10;
            if(dig1==0 || dig2==0) return false;
            num1/=10;
            num2/=10;

        }
        while(num1){
            int dig1=num1%10;
            if(dig1==0) return false;
            num1/=10;
        }
        while(num2){
            int dig2=num2%10;
            if(dig2==0) return false;
            num2/=10;

        }
        return true;

    }
    vector<int> getNoZeroIntegers(int n) {
        int num=n;
       for(int i=1;i<n;i++){
        int num2=num-i;
    
        if(check(num2,i)){
            return {i,num2};

        }        

       }
       return {};
    }
};