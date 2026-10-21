class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<vector<int>> adj(n);
        for(int i =0 ; i< prerequisites.size(); i++){
            int course = prerequisites[i][0];
            int pre = prerequisites[i][1];

            adj[pre].push_back(course);
        }
        vector<int> indegree(n,0);
        for(int i =0 ; i<n ; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i =0 ; i<n ; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it : adj[node]){
                indegree[it]-- ;
                if(indegree[it] == 0) q.push(it);
            }

        }
        if(ans.size() != n) return false;
        return true;
        
    }
};