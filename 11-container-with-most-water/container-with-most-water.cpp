class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        // vector<int> pre(n,0);
        // vector<int> suff(n,0);
        // int a = height[0];
        // for(int i =0 ; i<n ; i++){
        //     if(height[i] > a){
        //         pre[i] = height[i];
        //         a = height[i];
        //     }
        // }
        // a = height[n-1];
        // for(int i = n-1 ; i>=0 ; i++){
        //     if(height[i] > a){
        //         suff[i] = height[i];
        //         a = height[i];
        //     }
        // }
        int maxi =0 ;
        int low =0 , high = n-1 ;
        while(low <= high){
            int wid = (high - low);
            int h = min(height[low] , height[high]);
            int ans = wid*h;
            maxi = max(ans , maxi);
            if(height[low] < height[high]){
                low++;
            }else{
                high--;
            }
        }
        return maxi;
    }
};