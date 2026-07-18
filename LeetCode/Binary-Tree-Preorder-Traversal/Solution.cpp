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
15    vector<int> preorderTraversal(TreeNode* root) {
16        vector<int>ans;
17        if(root==NULL)
18        return ans;
19        stack<TreeNode*>a;
20        a.push(root);
21        while(!a.empty()){
22            TreeNode* node=a.top();
23            a.pop();
24            if(node->right!=NULL)
25            a.push(node->right);
26            if(node->left!=NULL)
27            a.push(node->left);
28            ans.push_back(node->val);
29        }
30        return ans;
31    }
32};