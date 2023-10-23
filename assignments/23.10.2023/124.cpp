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
    int m_sum = INT_MIN;
    int mp(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh = max(mp(root->left),0);
        int rh = max(mp(root->right),0);
        int c_sum = root->val + lh + rh;
        m_sum = max(m_sum,c_sum);
        return root->val + max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        mp(root);
        return m_sum;
    }
};