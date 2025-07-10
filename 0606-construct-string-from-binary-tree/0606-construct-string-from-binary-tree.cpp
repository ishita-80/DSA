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
    void solve(TreeNode* root, string &s ){
        if(root==NULL){
            s.pop_back();
            return;
        }
        string toPsh=to_string(root->val);
        //edge case if root val is 0
        s+=toPsh;
        s+="(";
        solve(root->left,s);
        if(root->left){
        s+=")";
        }
        if(root->right){
            if(!root->left){
                s+="()";
            }
        s+="(";
        solve(root->right,s);
        s+=")";
        }

    }
    string tree2str(TreeNode* root) {
        string s="";
        solve(root,s);
        return s;
    }
};