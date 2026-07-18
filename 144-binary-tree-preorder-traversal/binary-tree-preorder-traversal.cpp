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
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
        return ans;
        stack<TreeNode*>a;
        a.push(root);
        while(!a.empty()){
            TreeNode* node=a.top();
            a.pop();
            if(node->right!=NULL)
            a.push(node->right);
            if(node->left!=NULL)
            a.push(node->left);
            ans.push_back(node->val);
        }
        return ans;
    }
};