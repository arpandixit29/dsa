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
14    TreeNode* nextright=NULL;
15    void flatten(TreeNode* root) {
16        if(root==NULL)
17        return;
18        TreeNode* pre=NULL;
19        stack<TreeNode*>st;
20        st.push(root);
21        while(!st.empty()){
22            TreeNode* curr=st.top();
23            st.pop();
24            if(pre){
25                pre->left=NULL;
26                pre->right=curr;
27            }
28            if(curr->right)
29            st.push(curr->right);
30            if(curr->left)
31            st.push(curr->left);
32            pre=curr;
33
34        }
35    }
36};