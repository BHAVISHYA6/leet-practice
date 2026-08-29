class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string , string> mpp;
        string res;
        mpp["Jan"] = "01";
        mpp["Feb"] = "02";
        mpp["Mar"] = "03";
        mpp["Apr"] = "04";
        mpp["May"] = "05";
        mpp["Jun"] = "06";
        mpp["Jul"] = "07";
        mpp["Aug"] = "08";
        mpp["Sep"] = "09";
        mpp["Oct"] = "10";
        mpp["Nov"] = "11";
        mpp["Dec"] = "12";

        if(date.length()== 13){
            res = date.substr(9,4)+("-")+mpp[date.substr(5 , 3)]+("-")+date.substr(0 ,2);
        }else{
            res = date.substr(8,4)+("-")+mpp[date.substr(4 , 3)]+("-")+("0") +date.substr(0 ,1);
        }
        
    return res;    
    }
};