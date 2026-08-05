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
    int maxi = 0;
    int rec(TreeNode* node , int &maxi){
        if(node == NULL) return 0;
        int left = rec(node->left , maxi);
        int right = rec(node ->right , maxi);
        maxi = max(maxi , left+right);
        return 1+ max(left , right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        rec(root , maxi);
        return maxi;
        
    }
};