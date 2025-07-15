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
    TreeNode* solve(TreeNode* root, vector<int> &nums, int s,int e){
       //bc
        if(s==e){
            int mid=s+(e-s)/2;
             root =new TreeNode(nums[mid]);
            return root;
        } 
        if(s>e) return NULL;
        //create
        int mid=s+(e-s)/2;
        root =new TreeNode(nums[mid]);
        root->left=solve(root,nums,s,mid-1);
        root->right=solve(root,nums,mid+1,e);
       return root;
       }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int e=nums.size()-1;
        int s=0;
       // int mid= e/2;
        TreeNode* root = NULL;
        return solve(root,nums,s,e);

    }
};