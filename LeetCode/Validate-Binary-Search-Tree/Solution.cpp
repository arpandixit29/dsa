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
15        long prev = LONG_MIN;
16        return inorder(root, prev);
17    }
18
19    bool inorder(TreeNode* root, long &prev) {
20        if(root == NULL) return true;
21
22        if(!inorder(root->left, prev)) return false;
23
24        if(root->val <= prev) return false;
25
26        prev = root->val;
27
28        return inorder(root->right, prev);
29    }
30};