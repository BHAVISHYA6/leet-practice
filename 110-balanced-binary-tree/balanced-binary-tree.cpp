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
    int  height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        return 1+ max(left , right);
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int ltree = height(root->left);
        int rtree = height(root->right);
        //early termiantor 
        if(abs(ltree - rtree) > 1){
            return false;
        }
        bool leftnode = isBalanced(root->left);
        bool rightnode = isBalanced(root->right);
        return (leftnode && rightnode);
    }
};