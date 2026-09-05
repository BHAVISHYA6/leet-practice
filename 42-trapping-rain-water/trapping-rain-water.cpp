class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
       vector<int> leftmax(n);
       vector<int> rightmax(n);
       int maxi = INT_MIN;
       for(int i =0; i< n ; i++){
            if(height[i] > maxi){
                maxi = height[i];
                
            }
            leftmax[i] = maxi;
       }
       maxi = 0;
       for(int i = n-1 ; i>=0 ; i--){
            if(height[i] > maxi){
                maxi = height[i];
                
            }
            rightmax[i] = maxi;
       }
       int total =0 ;
       for(int i =0 ; i< n ; i++){
            if(height[i] < rightmax[i] && height[i] < leftmax[i]){
                total += min(leftmax[i] , rightmax[i]) - height[i];
            }
       }
       return total;
    }
};