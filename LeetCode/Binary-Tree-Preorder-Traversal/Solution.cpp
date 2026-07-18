1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void preorder(TreeNode* root, vector<int>& ans){
15        if(root==NULL)
16        return ;
17        ans.push_back(root->val);
18        preorder(root->left, ans);
19        preorder(root->right, ans);
20    }
21    
22    vector<int> preorderTraversal(TreeNode* root) {
23        vector<int>ans;
24        preorder(root, ans);
25        return ans;
26    }
27};