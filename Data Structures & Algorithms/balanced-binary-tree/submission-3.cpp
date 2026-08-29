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
    int height(TreeNode* root, bool& res){
        if(!res) return 0;
        if(!root) return 0;
        int leftHeight = 1+height(root->left, res);
        int rightHeight = 1+height(root->right, res);
        if(res) res = (leftHeight == rightHeight) || (leftHeight == rightHeight+1) || (leftHeight == rightHeight-1);
        return max(leftHeight, rightHeight);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool res = true;
        height(root, res);
        return res;
    }
};
