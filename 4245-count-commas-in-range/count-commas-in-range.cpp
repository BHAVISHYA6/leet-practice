class Solution {
public:
    int countCommas(int n) {
        int temp = n ;
        int cnt =0 ;
        while(temp > 0){
            temp = temp/10;
            cnt++;
        }
        if(cnt < 4) return 0;
        return (n - 999);
    }
};