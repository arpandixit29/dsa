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
14    vector<vector<int>> verticalTraversal(TreeNode* root) {
15        
16        map<int, map<int,multiset<int>>>idx;
17        queue<pair<TreeNode*, pair<int, int>>>q;
18        q.push({root,{0,0}});
19        while(!q.empty()){
20            auto p=q.front();
21            q.pop();
22            TreeNode* a=p.first;
23            int x=p.second.first;
24            int y=p.second.second;
25            idx[x][y].insert(a->val);
26            
27            if(a->left!=NULL){
28                q.push({a->left,{x-1,y+1}});
29            }
30            if(a->right!=NULL){
31                q.push({a->right,{x+1,y+1}});
32            }
33            
34        }
35        vector<vector<int>>ans;
36        for(auto p: idx){
37            vector<int>col;
38            for(auto q: p.second){
39                col.insert(col.end(),q.second.begin(),q.second.end());
40            }
41            ans.push_back(col);
42        }
43        return ans;
44    }
45};