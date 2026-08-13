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
13   private:
14    int fLH(TreeNode* node) {
15        int height = 0;
16        while (node) {
17            height++;
18            node = node->left;
19        }
20        return height;
21    }
22    int fRH(TreeNode* node) {
23        int height = 0;
24        while (node) {
25            height++;
26            node = node->right;
27        }
28        return height;
29    }
30
31   public:
32    int countNodes(TreeNode* root) {
33        if (!root) return 0;
34        int lh=fLH(root);
35        int rh=fRH(root);
36        if (lh==rh) return (1 << lh) - 1;
37        return 1 +countNodes(root->left)+countNodes(root->right);
38    }
39};