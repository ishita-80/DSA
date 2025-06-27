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
    void solve(TreeNode* root, int targetSum, int sum, vector<int>&v,vector<vector<int>>&ans){
        //BC
        if(root==NULL) return ;
        sum+=root->val;
        v.push_back(root->val);
        //LeafNode
        if(root->left==NULL && root->right==NULL){
            //check
            if(sum==targetSum){
                ans.push_back(v);
            }
        }
        solve(root->left,targetSum,sum,v,ans);
        solve(root->right,targetSum,sum,v,ans);
        v.pop_back();
        return ;
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        int sum=0;
        solve(root,targetSum,sum,v,ans);
        return ans;
    }
};