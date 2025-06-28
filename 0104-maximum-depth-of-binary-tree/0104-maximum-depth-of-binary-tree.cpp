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
    int maxDepth(TreeNode* root) {
        //bc
        if(root==NULL){
            return 0;
        }
        //rr
        int leftAns=maxDepth(root->left);
        int rightAns=maxDepth(root->right);

        //1 case
        return (max(leftAns,rightAns)+1);
    }
};