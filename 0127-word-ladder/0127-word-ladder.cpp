class Solution {
public:
    // void solve(unordered_map<string,vector<string>>&grp,int &count,unordered_map<string,bool>&visited,string &endWord){
    //     count=1;
    //     queue<pair<string,int>>q;
    //     vector<string>preVisit;
    //     q.push({grp.begin().first,count});
    //     preVisit.push_back(grp.begin().first);
    //     while(!q.empty()){
    //         if(q.front().first==endWord) {
    //             count=q.front().second;
    //             return;
    //         }
    //         auto top=q.front();
    //         q.pop();
    //         for(auto it:grp[top.first]){
                

    //         }


    //     }

        

  //  }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>stt(wordList.begin(),wordList.end());
       // stt.insert(beginWord);
        // int size=wordList.size();
        // for(int i=0;i<size;i++){
        //     stt.insert(wordList[i]);
        // }
        if(stt.find(endWord)==stt.end()) return 0;
        unordered_map<string, vector<string>> grp;
        //map begin word
        if(stt.find(beginWord)==stt.end()){
        int n=beginWord.size();
            while(n>0){
                n--;
                string temp=beginWord;
                for(char ch='a';ch<='z';ch++){
                    temp[n]=ch;
                    if(stt.find(temp)!=stt.end()){
                        grp[beginWord].push_back(temp);
                        grp[temp].push_back(beginWord);
                    }

                }
            }
        }    
        for(int i=0;i<wordList.size();i++){
            int n=wordList[i].size();
            while(n>0){
                n--;
                string temp=wordList[i];
                for(char ch='a';ch<='z';ch++){
                    temp[n]=ch;
                    if(stt.find(temp)!=stt.end()){
                        grp[wordList[i]].push_back(temp);
                        grp[temp].push_back(wordList[i]);
                    }

                }
                


            }

        }
        
        unordered_map<string,bool>visited;
        queue<pair<string,int>> q;
        
       // vector<string> preVisited; 

        q.push({beginWord, 1});
        visited[beginWord]=true;
      //  preVisited.push_back(beginWord);

        while (!q.empty()) {
            auto [word, steps] = q.front();
            q.pop();

            // Now we mark visited when popping
             
          //  preVisited.pop_back(); // removing from active

            if (word == endWord) return steps;

            for (auto &nbr : grp[word]) {
                // neighbor may already be in queue, 
                // but we only finalize on pop
                if (!visited[nbr]) {
                    q.push({nbr, steps+1});
                    visited[nbr] = true; // track as active
                }
            }
        }
        return 0;

    }
    
};