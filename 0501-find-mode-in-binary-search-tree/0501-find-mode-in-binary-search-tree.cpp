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
    void solve(TreeNode* root, unordered_map<int,int> &mpp, int &freq){
        if(root==nullptr){
            return;
        }
        mpp[root->val]++;
        if(freq < mpp[root->val]){
            freq=mpp[root->val];
        }
        solve(root->left,mpp,freq);
        solve(root->right,mpp,freq);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        int freq=-1;
        solve(root,mpp,freq);
        for(auto it:mpp){
            if(it.second==freq){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};