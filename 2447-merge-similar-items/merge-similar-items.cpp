class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int, int> mp;
        for(int i =0 ;i< items1.size(); i++){
            mp[items1[i][0]] = items1[i][1];
        }
        for(int j =0 ; j< items2.size() ; j++){
            if(mp.find(items2[j][0]) != mp.end()){
                mp[items2[j][0]] += items2[j][1];
            }
            else{
                mp[items2[j][0]] = items2[j][1];
            }
        }
        vector<vector<int>> ret;
        for(auto x: mp){
            ret.push_back({x.first , x.second});
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
};