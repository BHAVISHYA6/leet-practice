class Solution {
public:
    void psee(vector<int>& arr, vector<int> &pse){
        stack<int> st;
        for(int i =0 ; i<arr.size(); i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()) pse[i] = -1 ;
            else{
                pse[i] = st.top() ;
            }
            st.push(i);

        }

    }

    void nsee(vector<int>& arr, vector<int> &nse){
        stack<int> st;
        int n = arr.size();
        for(int i = n-1 ; i>= 0 ; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i] = n;
            }else{
                nse[i] = st.top();
            }
            st.push(i);
        }
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;
        int MOD = 1e9 +7 ;
        vector<int> pse(n,0);
        vector<int> nse(n ,0);
        psee(arr, pse);
        nsee(arr, nse);
        for(int i =0 ; i<arr.size(); i++){
            long long left = i-pse[i];
            long long right = nse[i] -i;
            ans = (ans +(1LL*arr[i] *left %MOD )*right % MOD) % MOD;
            
        }
        return ans;
        
        
    }
};