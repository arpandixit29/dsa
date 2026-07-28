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
14    bool isSymmetric(TreeNode* root) {
15        if(root==NULL)
16        return true;
17        return ans(root->left, root->right);
18    }
19    bool ans(TreeNode* left, TreeNode* right ){
20        if(left==NULL || right==NULL)
21        return left==right;
22
23        if(left->val!=right->val)
24        return false;
25
26        return ans(left->left, right->right)&&
27        ans(left->right, right->left);
28    }
29};