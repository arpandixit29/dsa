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
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15        vector<vector<int>>ans;
16
17        queue<TreeNode*>a;
18        a.push(root);
19        int c=1;
20        if(root==NULL)
21        return ans;
22        while(!a.empty()){
23            int n=a.size();
24            vector<int>b;
25            for(int i=0; i<n; i++){
26                TreeNode* node=a.front();
27                a.pop();
28                if(c==1)
29                b.push_back(node->val);
30                else
31                b.insert(b.begin(),node->val);
32
33                if(node->left!=NULL)
34                a.push(node->left); 
35                
36                if(node->right!=NULL)
37                a.push(node->right);
38                
39                
40            }
41            c=c*(-1);
42            ans.push_back(b);
43        }
44        return ans;
45    }
46};