class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int size=deck.size();
        queue<int>q;
        vector<int>ans(size);
        for(int i=0;i<size;i++){
            q.push(i);
        }
        for(int i=0;i<size;i++){
            if(!q.empty()){
            ans[q.front()]=deck[i];
            q.pop();
            }
            if(!q.empty()){
            q.push(q.front());
            q.pop();
        }
        }
        return ans;
    }
};