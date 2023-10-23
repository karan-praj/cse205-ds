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
    int p = 0;
    void travel(TreeNode* root,int level,vector<vector<int>> &a)
    {
        if(root==NULL)
        {
            return;
        }
        if(level>=a.size())
        {
            a.push_back({});
        }
        a[level].push_back(root->val);
        travel(root->left,level+1,a);
        travel(root->right,level+1,a);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        travel(root,0,ans);
        for(int i=1;i<ans.size();i+=2)
        {
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};