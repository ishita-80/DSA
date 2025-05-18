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
private: 
    int findLen(ListNode* head){
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;

        }
        return length;

    }    
public:
    ListNode* removeNodes(ListNode* head) {
       int n=findLen(head);
       ListNode* head2=NULL;
       ListNode* temp2=NULL;
       vector<int>arr(n,0);
       vector<int>nextGreater(n,0);
       stack<int>st;
       st.push(-1);
       ListNode* temp=head;
       int i=0;
       while(temp!=NULL){
        arr[i]=temp->val;
        temp=temp->next;
        i++;
       }
       for(int i=n-1;i>=0;i--){
        int element=arr[i];
        while(st.top()!=-1 && st.top()<=element){
            st.pop();
        }
        nextGreater[i]=st.top();
        st.push(element);
       }

       for(int i=0;i<n;i++){
       // cout<<nextGreater[i];
        if(nextGreater[i]!=-1)  continue;
        
        if(temp2==NULL){
           // cout<<arr[i];

            ListNode* newNode=new ListNode(arr[i]);
            temp2=newNode;
            head2=newNode;
        }
        else{
         ListNode* newNode=new ListNode(arr[i]);
         temp2->next=newNode;
         temp2=newNode;
        }
       }
    //    ListNode* temp3=head2;
    //    while(temp3){
    //     cout<<temp3->val;
    //     temp3=temp3->next;
    //    }
       return head2;

    }
};