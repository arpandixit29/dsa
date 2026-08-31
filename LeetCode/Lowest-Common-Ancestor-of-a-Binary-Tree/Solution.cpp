1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lca(TreeNode* root, TreeNode* p, TreeNode* q){
13        if(root==NULL)
14        return NULL;
15        if(root->val==p->val||root->val==q->val){
16            return root;
17        }
18        TreeNode* left=lca(root->left,p,q);
19        TreeNode* right=lca(root->right,p,q);
20        if(left!=NULL && right!=NULL)
21        return root;
22        else if(left!=NULL)
23        return left;
24        else
25        return right;
26    }
27    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
28        return lca(root,p,q);
29    }
30};