class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            bool flag=1;
            if(!st.empty()) {
                
                while(!st.empty() && st.top()>0 && asteroids[i]<0 && st.top()<abs(asteroids[i])){
                    st.pop();
                }

                // while(!st.empty() && st.top()<0 && asteroids[i]>0 && abs(st.top())<asteroids[i]){
                //     st.pop();
                // }
                if(!st.empty() && st.top()>0 && asteroids[i]<0 && st.top()==abs(asteroids[i])){
                    st.pop();
                    flag=0;

                }
                if(!st.empty()&& st.top()>0 && asteroids[i]<0 && st.top()>= abs(asteroids[i])){
                    flag=0;
                }
                // if(!st.empty()&& st.top()<0 && asteroids[i]>0 && abs(st.top())>= asteroids[i]){
                //     flag=0;
                // }

            }
            
               if (flag){
                st.push(asteroids[i]);
               }
            
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};