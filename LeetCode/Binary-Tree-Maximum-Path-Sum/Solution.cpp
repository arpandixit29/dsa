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
14    int ans=0;
15    int path(TreeNode* root, int& maxi){
16        if(root==NULL)
17        return 0;
18        int ls=max(0,path(root->left, maxi));
19        int rs=max(0,path(root->right, maxi));
20        maxi=max(maxi,root->val+ls+rs);
21        return max(ls,rs)+root->val;
22
23    }
24    int maxPathSum(TreeNode* root) {
25        int maxi=INT_MIN;
26        path(root,maxi);
27        return maxi;
28    }
29};