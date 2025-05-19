class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string , int> mpp;
        int i=0;
        pair<int,string>p={-1,""};
        for(auto it:messages){
            string s=it;
            int count=0;
            int index=0;
            while(index<s.size()){
                while(index<s.size() && s[index]!=' '){
                    index++;
                }
                count++;
                index++;
            }
            if(mpp.find(senders[i])!=mpp.end()){
                mpp[senders[i]]+=count;
                if(p.first<mpp[senders[i]]){
                    p.first=mpp[senders[i]];
                    p.second=senders[i];
                }
                else if(p.first==mpp[senders[i]]){
                    if(p.second<senders[i]) {
                        p.first=mpp[senders[i]];
                        p.second=senders[i]; 
                    }
                   
                }
            }
            else {
                mpp[senders[i]]=count;
                
                if(p.first<mpp[senders[i]]){
                    p.first=mpp[senders[i]];
                    p.second=senders[i];
                }
                else if(p.first==mpp[senders[i]]){
                    if(p.second<senders[i]) {
                        p.first=mpp[senders[i]];
                        p.second=senders[i]; 
                    }
                
                }
            }
            i++;
        }
        return p.second;

    }
};