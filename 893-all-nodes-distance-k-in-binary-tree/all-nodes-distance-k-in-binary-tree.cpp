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
    void mark_parent(unordered_map<TreeNode*,TreeNode*> &parent , TreeNode* root , TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
                parent[curr->left] = curr ;
            }
            if(curr->right){
                q.push(curr->right);
                parent[curr->right] = curr ;
            }

        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        mark_parent(parent , root , target);
        unordered_map<TreeNode* , bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int curr_l =0;
        while(! q.empty()){
            int size = q.size();
            if(curr_l == k) break;
            curr_l++;
            for(int i =0 ; i< size; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right ]){
                    q.push(curr->right );
                    visited[curr->right ] = true;
                }
                if(parent.find(curr) != parent.end() && !visited[parent[curr]]){
                    q.push(parent[curr]);
                    visited[parent[curr]] = true;
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            res.push_back(curr->val);
        }
        return res;
        
    }
};