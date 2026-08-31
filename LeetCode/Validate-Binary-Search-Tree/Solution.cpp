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
14    bool isValidBST(TreeNode* root) {
15        return ans(root, LONG_MIN, LONG_MAX);
16    }
17    bool ans(TreeNode* root, long min, long max){
18        if(root==NULL)return true;
19        if(root->val<=min||root->val>=max)return false;
20        return ans(root->left, min, root->val) && ans(root->right, root->val, max);
21    }
22};