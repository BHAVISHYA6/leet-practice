class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 ;
        int product =1;
        int nums = n ;
        if(n == 0) return true;
        while(nums > 0){
            int digit = nums % 10;
            sum += digit ;
            product *= digit;
            nums /= 10;
        }
        if(n % (sum + product) == 0){
            return true;
        }
        return false;

    }
};