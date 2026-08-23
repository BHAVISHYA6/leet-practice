class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi = *max_element(piles.begin(), piles.end());
        long long low = 1 , high = maxi, ans =0;
        
        while(low <= high){
            long long mid = (low + high) /2;
            long long totalh =0;
            for(int i = 0 ; i< piles.size(); i++){
                totalh += (piles[i] + mid -1)/ mid;
            }
            if(totalh <=h) {
                ans = mid;
                high = mid -1;
            }
            else low = mid+1;
        }
        return ans ;
    }
};