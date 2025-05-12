class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> st;
        vector<int>ans;
        int size=digits.size();
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                for(int k=0;k<size;k++){
                    if(i==j||j==k||k==i)continue;
                    int digitObtained=digits[i]*100+digits[j]*10+digits[k];
                    if(digitObtained>=100 &&( digitObtained&1)== 0){
                        st.insert(digitObtained);
                    }

                }
            }
        }
        for(auto it:st){
            ans.push_back(it);

        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};