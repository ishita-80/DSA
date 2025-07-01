class Solution {
    void toConvertGL(int num,string &ans,string s){
        char ch=s[0];
        if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
            ans+=s;
           
        }
        else{
             s.erase(0,1);
             ans+=s;
             ans.push_back(ch);

        }
        ans+="ma";
        for(int i=0;i<=num;i++){
            ans.push_back('a');
        }
        ans+=" ";
        return ;
    }
public:
    string toGoatLatin(string sentence) {
        string ans="", curr="";
        vector<string> str;
        int i=0,n=sentence.size();
        while(i<n){
            if(sentence[i]!=' '){
                curr.push_back(sentence[i]);
            }
            else {
                str.push_back(curr);              
                curr="";
            }
            i++;
            
        }
        //last wali str me space nhi hoga ie vo reh rhi hogi
        str.push_back(curr);
        for(int i=0;i<str.size();i++){
            toConvertGL(i,ans,str[i]);

        }
        //extra space
        ans.pop_back();
        return ans;
        
    }
};