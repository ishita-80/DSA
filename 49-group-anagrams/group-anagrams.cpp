class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> arr;
        vector<vector<string>>res;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string ans=strs[i];
            sort(ans.begin(),ans.end());
            arr.push_back(ans);
        }
        for(int j=0;j<n;j++){
            if((j>0 && arr[j]==arr[j-1] )|| (arr[j]=="#")) continue;
            
            vector<string>result;
            result.push_back(strs[j]);
        for(int i=j+1;i<n;i++){
            if(arr[j]==arr[i]){
                arr[i]="#";
                result.push_back(strs[i]);
            }
        }
        res.push_back(result);
        
        }

     return res;

    }
};