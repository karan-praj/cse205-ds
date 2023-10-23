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
    vector<int> ans;
    void r(TreeNode* root,int level,vector<int> &a)
    {
        if(root==NULL)
        {
            return;
        }
        if(level == a.size())
        {
            a.push_back(root->val);
        }
        r(root->right,level+1,a);
        r(root->left,level+1,a);
    }
    vector<int> rightSideView(TreeNode* root) {
        r(root,0,ans);
        return ans; 
    }
};