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
    priority_queue<int, vector<int>, greater<int>> vals;
    int kthSmallest(TreeNode* root, int k) {
       dfs(root);
       k--;
       while(k--) vals.pop();
       return vals.top();
    }
    void dfs(TreeNode* node){
        if(!node) return;
        else vals.push(node->val);

        dfs(node->left);
        dfs(node->right);
    }
};
