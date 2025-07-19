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
    void inorderTrav(TreeNode* root, vector<int> &ans){
        if(root==NULL) return ;
        inorderTrav(root->left,ans);
        ans.push_back(root->val);
        inorderTrav(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        inorderTrav(root,ans);
        int i=0, j=ans.size()-1;
        while(i<j){
            if(ans[i]+ans[j]==k) return true;
            else if(ans[i]+ans[j]>k) j--;
            else i++;
        }
        return false;

    }
};