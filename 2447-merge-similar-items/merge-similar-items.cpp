class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret;
        sort(items1.begin(), items1.end());
        sort(items2.begin(), items2.end());
        for(int i =0 ; i<items1.size(); i++){
            for(int j =0 ; j< items2.size(); j++){
                if(items1[i][0] == items2[j][0]){
                    items1[i][1] = items1[i][1]+ items2[j][1];
                    ret.push_back(items1[i]);
                    break;
                }
            }
            if(ret.empty()){
                ret.push_back(items1[i]);
            }
            if(!ret.empty() && ret.back()[0] != items1[i][0]){
                ret.push_back(items1[i]);
            }
        }

        for(int j =0 ; j< items2.size(); j++){
            bool flag = false ;
            for(int i =0 ; i< items1.size(); i++){
                if(items1[i][0] == items2[j][0]){
                    flag = true ;
                    break;
                }
            }
            if(!flag){
                ret.push_back(items2[j]);
            }
        }
        sort(ret.begin(), ret.end());
        return ret;
        
    }
};