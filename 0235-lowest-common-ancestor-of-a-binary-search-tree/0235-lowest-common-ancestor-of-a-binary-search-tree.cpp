/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {    TreeNode* leftAns=0;
        if(root==nullptr) return nullptr;
        if(p==root || q==root) return root;
        if((p->val<root->val && q->val>root->val)||(p->val>root->val && q->val<root->val)){
            return root;
        }
        else if(p->val<root->val && q->val < root->val){
           leftAns= lowestCommonAncestor(root->left, p, q);
           if(leftAns) return leftAns;

        } 
        return lowestCommonAncestor(root->right,p, q);
    }
};