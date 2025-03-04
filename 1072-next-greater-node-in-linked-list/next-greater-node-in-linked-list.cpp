/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> linkedListArr;
        stack<int>st;

        ListNode* temp=head;
        while(temp){
            linkedListArr.push_back(temp->val);
            temp=temp->next;

        }
        int n=linkedListArr.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && linkedListArr[st.top()]<linkedListArr[i]){
                linkedListArr[st.top()]=linkedListArr[i];
                st.pop();
            }
            st.push(i);
        }
        while(st.size()){
            linkedListArr[st.top()]=0;
            st.pop();
        }
        return linkedListArr;

    }
};