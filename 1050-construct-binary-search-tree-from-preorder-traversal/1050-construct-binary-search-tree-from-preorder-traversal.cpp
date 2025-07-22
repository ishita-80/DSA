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
    TreeNode* solve(TreeNode* root, int &i,int mini, int maxi, vector<int>& preorder){
        if(i>=preorder.size()) return NULL;
        if(!root && preorder[i]>mini && preorder[i] < maxi ){
            root=new TreeNode(preorder[i++]);
            root->left=solve(NULL,i,mini,root->val,preorder);
            root->right=solve(NULL,i,root->val,maxi,preorder);
        }
        return root;


    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int i=0;
        TreeNode* root=NULL;
        return solve(root,i,mini,maxi,preorder);
    }
};