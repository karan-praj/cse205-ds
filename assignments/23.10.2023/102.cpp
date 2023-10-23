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
    vector<vector<int>> ans;
    void level(TreeNode* root, int l ,vector<vector<int>> &a)
    {
        if(root==NULL)
        {
            return;
        }        
        if(l==a.size())
        {
            a.push_back({root->val});
        }
        else
        {
            a[l].push_back(root->val);
        }
        level(root->left,l+1,a);
        level(root->right,l+1,a);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        level(root,0,ans);
        return ans;
    }
};