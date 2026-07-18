/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
        
        queue<TreeNode*>a;
        a.push(root);
        while(!a.empty()){
            vector<int>level;
            int b=a.size();
            for(int i=0; i<b; i++){
                TreeNode* node=a.front();
                a.pop();
                if(node->left!=NULL)
                a.push(node->left);
                if(node->right!=NULL)
                a.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
            
    }
};