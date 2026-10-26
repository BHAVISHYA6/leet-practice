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
    bool isval(TreeNode* node , long min , long max){
        if(node == NULL) return true;
        if(node->val >= max || node->val <= min) return false;
        return isval(node->left , min , node->val) && isval(node->right , node->val , max);
    }
    bool isValidBST(TreeNode* root) {
        return isval(root , LLONG_MIN , LLONG_MAX);
    }

};