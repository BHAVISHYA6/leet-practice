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
    int lf(TreeNode* node){
        int cnt = 0;
        while(node){
            cnt++;
            node = node->left;
        }
        return cnt;
    }
    int rt(TreeNode* node){
        int cnt = 0;
        while(node){
            cnt++;
            node =node->right;
        }
        return cnt;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        int left = lf(root);
        int right = rt(root);
        if(left == right) return (1<<left)-1;
        return 1 + countNodes(root->left) + countNodes(root->right);
        
            
            
    
    }
};