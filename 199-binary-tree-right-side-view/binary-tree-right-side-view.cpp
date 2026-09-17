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
    void rec(TreeNode* node , int level, queue<int> &q){
        if(node == NULL){
            return;
        }
        if(level == q.size()){
            q.push(node->val);
        }
        if(node->right) rec(node->right , level+1 , q);
        if(node->left) rec(node->left , level +1 , q);
    }
    vector<int> rightSideView(TreeNode* root) {
        queue<int> q;
        vector<int> ans;
        rec(root , 0 , q);
        while(!q.empty()){
            int v = q.front();
            q.pop();
            ans.push_back(v);
        }
        return ans;
    }
};