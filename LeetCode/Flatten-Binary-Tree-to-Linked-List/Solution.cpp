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
14    
15    TreeNode* nextright=NULL;
16    void flatten(TreeNode* root) {
17        if(root==NULL)
18        return;
19        TreeNode* curr=root;
20        while(curr!=NULL){
21            if(curr->left!=NULL){
22                if(curr->left!=NULL){
23                    TreeNode* prev=curr->left;
24                
25                    while(prev->right!=NULL)
26                    prev=prev->right;
27                    prev->right=curr->right;
28                    curr->right=curr->left;
29                    curr->left=NULL;
30                }
31            }
32            curr=curr->right;
33        }
34    }
35};