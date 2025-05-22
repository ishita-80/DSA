class Solution {
public:
    int pivotInteger(int n) {
        int num=n;
        if(n==1) return 1;
        vector<int> pref(num+1,0);
        vector<int> suff(num+1,0);
        for(int i=1 ,j=num-1;i<num+1 && j>=0;i++,j--){
            pref[i]=pref[i-1]+i;
            suff[j]=suff[j+1]+(j+1);
        }
        for(int i=1;i<num+1;i++){
            if(pref[i]==suff[i-1]) return i;
        }
        return -1;     
    }
};