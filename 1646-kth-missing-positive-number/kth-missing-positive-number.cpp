class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt = 1, i = 0;
        while (i < arr.size() && k > 0) {
            if (cnt != arr[i]) {
                cnt++;
                k--;
            }else{
                i++;
                cnt++;
            }
        }
        while(k > 0){
            cnt++;
            k--;
        }            
        return cnt-1;
    }
};