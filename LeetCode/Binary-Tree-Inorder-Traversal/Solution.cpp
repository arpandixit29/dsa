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
14    TreeNode* iop(TreeNode* root){
15        TreeNode* p=root->left;
16        while(p->right!=NULL && p->right!=root){
17            p=p->right;
18        }
19        return p;
20    }
21    vector<int> inorderTraversal(TreeNode* root) {
22        vector<int>ans;
23        if(root==NULL)
24        return ans;
25        TreeNode* curr=root;
26        while(curr!=NULL){
27            if(curr->left==NULL){
28                ans.push_back(curr->val);
29                curr=curr->right;
30            }
31            
32            else{
33                TreeNode* ip=iop(curr);
34                if(ip->right==NULL){
35                    ip->right=curr;
36                    curr=curr->left;
37                }else{
38                    ip->right=NULL;
39                    ans.push_back(curr->val);
40                    curr=curr->right;
41                }
42            }
43        }
44        return ans;
45    }
46};