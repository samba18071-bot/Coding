class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        // If left subtree is missing, path must go through right subtree
        if (root->left == nullptr) return 1 + minDepth(root->right);
        
        // If right subtree is missing, path must go through left subtree
        if (root->right == nullptr) return 1 + minDepth(root->left);

        // If both children exist, take the minimum of both
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};