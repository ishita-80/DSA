class Solution {
    string extractEmailAdd(string& current){
        string ans="";
        int i=0;
        while(i<current.size() && current[i]!='@'){
            if(current[i]=='+') {
                while(current[i]!='@') i++;
                break;
            }
            else if(current[i]=='.') i++;
            else{
                ans+=current[i];
                i++;
            }

        }
        ans+=current.substr(i);
        return ans;
    }
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int>mpp;
        for(int i=0;i<emails.size();i++){
            string toPush="";
            string current=emails[i];
            toPush=extractEmailAdd(current);
            mpp[toPush]++;
        }
        return mpp.size();
    }
};