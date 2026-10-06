class Solution {
public:
    int larea(vector<int> &nums){
        stack<int> st;
        int maxarea =0 ;
        int n = nums.size();
        for(int i =0 ; i<n ;i++){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty()? -1 : st.top();
                maxarea = max(maxarea , nums[element]*(nse -pse -1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int element = st.top();
            st.pop();
            int nse = n;
            int pse = st.empty()? -1 : st.top();
            maxarea = max(maxarea , nums[element]*(nse -pse -1));
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> psum(n, vector<int>(m, 0));
        for(int j =0 ; j< m ; j++){
            int sum =0 ;
            for(int i =0 ; i<n ; i++){
                sum += matrix[i][j] -'0';
                if(matrix[i][j] == '0') sum =0;
                psum[i][j] = sum;
            }
        }
        int maxi =0 ;
        for(int i =0 ; i< n; i++){
            maxi = max(maxi, larea(psum[i]));
        }
        return maxi;
        
    }
};