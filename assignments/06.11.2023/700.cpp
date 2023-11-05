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
    TreeNode* searchBST(TreeNode* root, int val) {
        // Base case: If the root is NULL, the tree is empty, or the value is not found.
        // Return NULL to indicate that the value is not present in the tree.
        if (root == NULL) {
            return NULL;
        }
        
        // If the current node's value matches the target value, return the current node.
        if (root->val == val) {
            return root;
        }
        // If the target value is smaller, search in the left subtree.
        else if (root->val > val) {
            // Make a recursive call to searchBST with the left subtree as the new root.
            return searchBST(root->left, val);
        }
        // If the target value is larger, search in the right subtree.
        else {
            // Make a recursive call to searchBST with the right subtree as the new root.
            return searchBST(root->right, val);
        }
    }
};