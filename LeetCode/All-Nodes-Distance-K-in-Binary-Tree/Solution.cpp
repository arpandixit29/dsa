1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    void trackp(TreeNode* root,map<TreeNode*,TreeNode*>&parent ){
13        queue<TreeNode*>q;
14        q.push(root);
15        while(!q.empty()){
16            TreeNode*p=q.front();
17            q.pop();
18            if(p->left!=NULL){
19                parent[p->left]=p;
20                q.push(p->left);
21            }
22            if(p->right!=NULL){
23                parent[p->right]=p;
24                q.push(p->right);
25            }
26        }
27    }
28    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
29        map<TreeNode*,bool>visited;
30        map<TreeNode*, TreeNode*>parent;
31        trackp(root,parent);
32        queue<TreeNode*>q;
33        q.push(target);
34        visited[target]=true;
35        int dist=0;
36        while(!q.empty()){
37            int size=q.size();
38            if(dist==k)
39            break;
40            dist++;
41            for(int i=0; i<size;i++){
42                TreeNode* curr=q.front();
43                q.pop();
44                if(curr->left!=NULL && visited[curr->left]==false){
45                    q.push(curr->left);
46                    visited[curr->left]=true;
47                }
48                if(curr->right!=NULL && visited[curr->right]==false){
49                    q.push(curr->right);
50                    visited[curr->right]=true;
51                }
52                if(parent[curr] && visited[parent[curr]]==false){
53                    q.push(parent[curr]);
54                    visited[parent[curr]]=true;
55                }
56            }
57        }
58        vector<int>ans;
59        while(!q.empty()){
60            TreeNode* curr=q.front();
61            q.pop();
62            ans.push_back(curr->val);
63        }
64        return ans;
65    }
66};