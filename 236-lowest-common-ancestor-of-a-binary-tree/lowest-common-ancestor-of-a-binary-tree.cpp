/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool path(TreeNode* root ,int a, vector<int> &curr){
        if(root == NULL) return false;
        curr.push_back(root->val);
        if(root->val == a) return true ;

        if(path(root->left , a , curr) || path(root->right , a , curr)){
            return true;
        }

        curr.pop_back();
        return false;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> path_p , path_q;
        path(root , p->val , path_p);
        path(root , q->val , path_q);
        int mini = min(path_p.size(), path_q.size());
    //    for(int i = 0 ; i< mini -1 ; i++){
    //         if(path_p[i] == path_q[i] && path_p[i+1] != path_q[i+1]){
    //             return path_p[i];

    //         }
    //     }
        // return -1;
        int i = 0;

        while (i < mini && path_p[i] == path_q[i]) {
            i++;
        }

        // The last common node is at index i - 1.
        int lcaVal = path_p[i - 1];

        // Find and return the actual TreeNode pointer.
        TreeNode* curr = root;

        for (int j = 1; j < i; j++) {
            if (curr->left && curr->left->val == path_p[j]) {
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        return curr;
        
    }
};