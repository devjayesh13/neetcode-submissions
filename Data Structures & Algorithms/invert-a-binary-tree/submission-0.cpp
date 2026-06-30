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
    TreeNode* invertTree(TreeNode* root) {
        sp(root);
        return root;
    }
    void sp(TreeNode* root){
        if(!root) return;
        sp(root->left);
        sp(root->right);
        //swaping
        TreeNode* temp = root->left;
        root->left = root->right; 
        root->right = temp;
    }
};
