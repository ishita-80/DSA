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
    void solve(TreeNode* root, vector<string>& ans,string s){
        if(!root) {
            return;
        }
        s+=to_string(root->val);
        if(!root->left && !root->right) ans.push_back(s);
        if(root->left){
           s+="->";
        }
        solve(root->left,ans, s);
        if(root->right){
            if(root->left){
                s.pop_back();
                s.pop_back();
            }
           s+="->";
        }
        solve(root->right,ans,s);
        


    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        solve(root,ans,"");
        return ans;
    }
};