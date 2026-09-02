1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12    
13public:
14    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
15        
16        while(root!=NULL){
17            if(root==p|| root==q)
18            return root;
19            if(p->val> root->val&& q->val> root->val){
20                root=root->right;
21            }
22            else if(p->val<root->val && q->val< root->val){
23                root=root->left;
24            }else{
25                return root;
26            }
27        }
28        return NULL;
29    }
30};