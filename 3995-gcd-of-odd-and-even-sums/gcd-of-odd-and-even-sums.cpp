class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int a=0,b=0;
        for(int i=1;i<2*n;i+=2) a+=i;
        for(int i=2;i<=2*n;i+=2) b+=i;
        return n;
        
    }
};