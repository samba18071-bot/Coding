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
    int maxPathSum(TreeNode* root) {
        int high = INT_MIN;
        maxPath(root,high);
        return high;
    }
    private:
     int maxPath(TreeNode* node, int&high){
        if(node == NULL)return 0;
        int left = max(0,maxPath(node->left,high));
        int right = max(0,maxPath(node->right,high));
        high = max(high, left+right+node->val);
        return max(left,right) + node->val;
    }
};