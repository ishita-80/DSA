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
    void solve(TreeNode* root, bool dir,int &sum){
        if(!root) return;
        if(!root->left && !root->right){
            if(dir){
                sum+=root->val;
            }
            return;
        }
        solve(root->left,1,sum);
        solve(root->right,0,sum);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        solve(root,0,sum);
        return sum;
    }
};