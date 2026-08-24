class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> missing;
        int index =0;
        int a = *max_element(arr.begin(), arr.end());
        for(int i =1 ; i<= 1000+n ; i++){
            if(index < arr.size() && i < arr[index] ){
                missing.push_back(i);
            }
            else if(index < arr.size() && i == arr[index]){
                index++;
            }else{
                missing.push_back(i);
            }
        }
        // for(int i =0 ; i< arr.size(); i++){
        //     if(cnt != arr[i]){
        //     missing.push_back(cnt);
        //     }
        //     cnt++;
        // }
        // for(int i = a+1; i<= 1000+n ; i++ ){
        //     missing.push_back(i);
        // }
        return missing[k-1];


    }
};