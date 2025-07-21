/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: 
    bool solve(TreeNode* root,long long maxi, long long mini){
        
        if(!root){
            return true;
        }
        if(root->val >= maxi || root->val <= mini){
            return false;
            
        }
        bool leftAns=solve(root->left,root->val,mini);
        bool rightAns=solve(root->right,maxi,root->val);
        return leftAns && rightAns;
    }
    bool isValidBST(TreeNode* root) {
       return solve(root,2147483657,-2147483658) ;
    }
};