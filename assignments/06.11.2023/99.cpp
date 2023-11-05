class Solution {
public:
    void dfs (TreeNode* root, vector<TreeNode*> &vec) {
        if (!root) return;
        dfs(root->left, vec);
        vec.push_back(root);
        dfs(root->right, vec);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> vec;
        vec.push_back(new TreeNode (INT_MIN));
        dfs(root, vec);
        vec.push_back(new TreeNode (INT_MAX));
        TreeNode* a = nullptr, *b = nullptr;
        int i = 1;
        for (; i<vec.size()-1; i++) {
            if (vec[i]->val > vec[i+1]->val) {
                if (!a) {
                    a = vec[i];
                    b = vec[i+1];
                }
                else b = vec[i+1];
            }
        }
        swap(a->val, b->val);
        
    }
};