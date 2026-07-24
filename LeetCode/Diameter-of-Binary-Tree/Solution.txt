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
14int ans=0;
15    int height(TreeNode* root){
16        if(root==NULL){
17            return 0;
18        }
19        int lh=height(root->left);
20        int rh=height(root->right);
21        ans=max(ans,rh+lh);
22        return max(rh,lh)+1;
23    }
24    int diameterOfBinaryTree(TreeNode* root) {
25        height(root);
26        return ans;
27    }
28};