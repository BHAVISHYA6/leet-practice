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
    int maxi = INT_MIN;
    int rec(TreeNode* node , int &maxi){
        if(node==NULL) return 0;
        int lefts = max(0,rec(node->left, maxi));
        int rights = max(0,rec(node->right, maxi));
        maxi = max(maxi , node->val+lefts+rights);
        return node->val+ max(lefts, rights);
    }
    int maxPathSum(TreeNode* root) {
        rec(root , maxi);
        return maxi;
    }
};