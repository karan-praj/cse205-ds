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
    int d = INT_MIN;
    int dia(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh = dia(root->left);
        int rh = dia(root->right);
        d = max(lh+rh,d);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia(root);
        return d;
    }
};