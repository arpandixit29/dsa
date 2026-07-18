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
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>a;
        TreeNode* curr= root;
        TreeNode* lv=NULL;
        while(curr!=NULL|| !a.empty()){
            while(curr!=NULL){
                a.push(curr);
                curr=curr->left;
            }
            TreeNode* node=a.top();
            if(node->right!=NULL && lv!=node->right){
                curr=node->right;
            }else{
                ans.push_back(node->val);
                lv=node;
                a.pop();
            }
        }
        return ans;
    }
};