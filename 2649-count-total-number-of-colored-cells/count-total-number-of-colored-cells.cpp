class Solution {
public:
    long long coloredCells(int n) {
        int startBlock=2*n-1;
        long long sum=startBlock;

        while(n-1>0 && startBlock>0){
            startBlock-=2;
            sum+=(2*startBlock);
            n--;
        }
        return sum;
    }
};