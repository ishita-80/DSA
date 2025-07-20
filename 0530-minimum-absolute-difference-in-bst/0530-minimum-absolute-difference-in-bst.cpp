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
    void solve(TreeNode* root, int &ele,int &diff){
        if(!root) return;
        //LNR
        solve(root->left,ele,diff);
        if(ele==-1){
            ele=root->val;
        }
        else{
            diff=min(diff,abs(root->val-ele));
            ele=root->val;
        }
        solve(root->right,ele,diff);
    }
    int getMinimumDifference(TreeNode* root) {
        int diff=INT_MAX;
        int ele=-1;
        solve(root,ele,diff);
        return diff;
    }
};