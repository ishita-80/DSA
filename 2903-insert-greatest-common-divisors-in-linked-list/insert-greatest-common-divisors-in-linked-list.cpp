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
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        while(a && b){
            if(a>b) {
               a= a-b;
            }
            else{
              b= b-a;
            }
        }

        return a>b?a:b;
    }
    void solve(ListNode* &head){
        ListNode* curr=head;
        ListNode* nextNode=curr->next;


       while(nextNode){
       int valToIn= gcd(curr->val,nextNode->val);
       //cout<<valToIn<<" ";
       ListNode* newNode=new ListNode(valToIn);
       //insert
       curr->next=newNode;
       newNode->next=nextNode;
       //increment
       curr=nextNode;
       nextNode=nextNode->next;
       }
       return ;

    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       // if(!head->next) return head;
        

        solve(head);
        return head;
    }
};