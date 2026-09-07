class Solution {
public:
    vector<int> nsee(vector<int> &arr){
        vector<int> nse(arr.size());
        stack<int> st;
        for(int i = arr.size()-1 ; i>=0 ; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(st.empty()) nse[i] = arr.size();
            else nse[i] = st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int> psee(vector<int> &arr){
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st;
        for(int i =0 ; i< n ;i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();
            st.push(i);
        }
        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = nsee(arr);
        vector<int> pse = psee(arr);
        int total =0;
        long long val =0 ;
        long long a = 0;
        int mod = (int) (1e9+7);
        for(int i =0 ; i<arr.size(); i++){
            int left = i - pse[i];
            int right = nse[i] - i;
            a = left * right *(1LL);
            val = ((a * arr[i] *(1LL)) % mod);  
            total = (total + val)% mod;
        }

        return total;
        
    }
};