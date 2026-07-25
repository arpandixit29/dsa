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
14    int widthOfBinaryTree(TreeNode* root) {
15        queue<pair<TreeNode*,unsigned long long>>q;
16        q.push({root,0});
17        int ans=0;
18        while(!q.empty()){
19            int n=q.size();
20            unsigned long long l=q.front().second;
21            unsigned long long r=q.back().second;
22            ans=max(ans,(int)(r-l+1));
23            for(int j=0;j<n;j++){
24                TreeNode* curr=q.front().first;
25                unsigned long long i=q.front().second;
26                q.pop();
27                if(curr->left){
28                    q.push({curr->left,2*i+1});
29                }
30                if(curr->right){
31                    q.push({curr->right,2*i+2});
32                }
33            }
34        }
35        return ans;
36    }
37};