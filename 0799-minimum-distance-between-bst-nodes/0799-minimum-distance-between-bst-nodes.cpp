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
    void solve(TreeNode* root,int &diff,int &ele){
        if(root==nullptr) return ;
        //LNR
        solve(root->left,diff,ele);
            
        if(ele!=-1){
            diff=min(diff,(root->val-ele));
            ele=root->val;
        }
        else{
            ele=root->val;
        }
        solve(root->right,diff,ele);

    }
    int minDiffInBST(TreeNode* root) {
        int diff=INT_MAX;
        int ele=-1;
        solve(root,diff,ele);
        return diff;
    }
};