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
    TreeNode* findLargest(TreeNode* root){
        if(root==nullptr) return root;
        if(root->right==nullptr) return root;
        //if(!root->right)return root;
       return findLargest(root->right);
        
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return nullptr;
        if(root->val==key){
            //1 case
            if(!root->left && !root->right){
                return nullptr;
            }
            else if(root->left && !root->right){
                TreeNode* temp=root->left;
              //  root->val=temp->val;
                delete root;
                return temp;
                
            }
            else if(!root->left && root->right ){
                TreeNode* temp=root->right;
                //root->val=root->right->val;
                delete root;
                return temp;

            }
            else{
                TreeNode* toBeDel=findLargest(root->left);
                root->val=toBeDel->val;
                root->left= deleteNode(root->left,toBeDel->val);

            }

        }
        else if(root->val<key){
           root->right= deleteNode(root->right,key);
           
        }
        else{
        root->left= deleteNode(root->left,key);
        
        }
        return root;
        
    }
};