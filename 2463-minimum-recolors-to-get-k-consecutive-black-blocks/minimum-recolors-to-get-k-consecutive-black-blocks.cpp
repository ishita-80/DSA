class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int size=blocks.size();
        int operationCnt=0;
        int minOperation=INT_MAX;
        int left=0,right=0;
        while((right<size) &&(right-left+1<=k)){
                if(blocks[right]=='W') operationCnt++;
                right++;
            }
        
        minOperation=operationCnt;
        while(right<size){
            if(blocks[right]=='W') operationCnt++;
            if(blocks[left]=='W') operationCnt--;
            left++;
            right++;
            minOperation=min(operationCnt,minOperation);
            

        }
        return minOperation;
    }
};