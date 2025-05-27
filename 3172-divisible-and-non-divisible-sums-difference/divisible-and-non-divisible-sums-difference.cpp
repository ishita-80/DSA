class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumOfDiv=0,notDiv=0;
        for(int i=1;i<=n;i++){
            if(i%m==0) sumOfDiv+=i;
            else notDiv+=i;
        }
        return notDiv-sumOfDiv;

    }
};