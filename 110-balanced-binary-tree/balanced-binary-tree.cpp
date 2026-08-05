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
    int maxdepth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = maxdepth(root->left);
        int right = maxdepth(root->right);
        return 1+max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int left = maxdepth(root->left);
        int right = maxdepth(root->right);

        if(abs(left - right) > 1){
            return false;
        }
        bool ls = isBalanced(root->left);
        bool rs = isBalanced(root->right);
        if( !ls || !rs){
            return false;
        }
        return true;
    }
};