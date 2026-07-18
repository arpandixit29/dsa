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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15        vector<vector<int>>ans;
16        if(root==NULL)
17        return ans;
18        
19        queue<TreeNode*>a;
20        a.push(root);
21        while(!a.empty()){
22            vector<int>level;
23            int b=a.size();
24            for(int i=0; i<b; i++){
25                TreeNode* node=a.front();
26                a.pop();
27                if(node->left!=NULL)
28                a.push(node->left);
29                if(node->right!=NULL)
30                a.push(node->right);
31                level.push_back(node->val);
32            }
33            ans.push_back(level);
34        }
35        return ans;
36            
37    }
38};