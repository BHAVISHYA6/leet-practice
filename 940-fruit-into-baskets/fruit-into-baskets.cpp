class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int left =0 , right =0 , maxc =0 , dist =0 ;
       unordered_map<int , int> mp;
       while(right < fruits.size()){
            mp[fruits[right]]++;
            while(mp.size() > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }if(mp.size() <= 2){
                maxc = max(maxc , right - left+1);
            }
            right++;
       }
       return maxc; 
    }
};