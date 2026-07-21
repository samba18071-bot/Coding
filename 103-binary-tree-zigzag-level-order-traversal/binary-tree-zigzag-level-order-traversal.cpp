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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        zigzag(root,0,res);
        return res;
    }
private:
    void zigzag(TreeNode* node,int level,vector<vector<int>>& res){
        if(!node) return;
        if(level == res.size()){
            res.push_back(vector<int>());
        }
        if(level %2 !=0){
            res[level].insert(res[level].begin(),node->val);
        }
        else{
            res[level].push_back(node->val);
        }
        zigzag(node->left,level+1,res);
        zigzag(node->right,level+1,res);

    }
};