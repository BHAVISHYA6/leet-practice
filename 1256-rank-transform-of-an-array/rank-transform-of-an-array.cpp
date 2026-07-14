class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> copy;
        unordered_map<int ,int> mp;
        int rank =0;
        for(int i =0 ; i<arr.size() ;i++){
            copy.push_back(arr[i]);
        }
        sort(arr.begin() , arr.end());
        for(int i =0 ;i<arr.size() ;i++){
            if(mp.find(arr[i]) != mp.end()){
                continue;
            }
            else{
                rank++;
                mp[arr[i]] = rank;
            }

        }
        for(int i =0 ; i<arr.size() ;i++){
            copy[i] = mp[copy[i]];
        }
        return copy;

    }
};