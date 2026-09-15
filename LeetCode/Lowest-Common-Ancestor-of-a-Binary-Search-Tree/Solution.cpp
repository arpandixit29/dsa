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
17            if(p->val> root->val&& q->val> root->val){
18                root=root->right;
19            }
20            else if(p->val<root->val && q->val< root->val){
21                root=root->left;
22            }else{
23                return root;
24            }
25        }
26        return NULL;
27    }
28};