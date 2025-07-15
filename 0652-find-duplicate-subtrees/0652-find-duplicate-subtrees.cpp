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
  string solve(TreeNode* root,vector<TreeNode*> &ans, unordered_map<string,int>&mpp,string s)   {  
     if(root==NULL) {
             return "N";
           
        }
        string curr = to_string(root->val);
       string leftS = solve(root->left,ans,mpp,s);
        
       string rightS = solve(root->right,ans,mpp,s);
       s=curr+','+leftS +','+ rightS;
       mpp[s]++;
       if(mpp[s]==2){
            ans.push_back(root);
        }   
        return s;

   }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
         unordered_map<string,int>mpp;
         vector<TreeNode*> ans;
         string s="";
         solve (root,ans,mpp,s);
         return ans;
    }
};