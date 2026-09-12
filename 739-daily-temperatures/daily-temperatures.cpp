class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n);
        result[n-1] = 0;
        for(int i = n-2 ; i >=0 ; i--){
            int next = i+1 ;
            while(next < n && temperatures[next] <= temperatures[i]){
                if(result[next] == 0){
                    next = n ;
                    break;
                }
                next = next + result[next];
            }
            if(next < n){
                result[i] = next - i;
            }
        }
        return result;
        
    }
};