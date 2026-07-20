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
14    int height(TreeNode* root){
15        if(root==NULL){
16            return 0;
17        }
18        int lh=height(root->left);
19        if(lh==-1) return -1;
20        int rh=height(root->right);
21        if(rh==-1) return -1;
22        if(abs(lh-rh)>1)
23
24        return -1;
25        return max(lh,rh)+1;
26    }
27    bool isBalanced(TreeNode* root) {
28        if(height(root)==-1)
29        return false;
30        return true;
31    }
32};