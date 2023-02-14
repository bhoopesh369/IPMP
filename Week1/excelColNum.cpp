class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        while(columnTitle != ""){
            char ch = columnTitle[0];
            ans += pow(26,columnTitle.length()-1) * (ch - 64) ;
            columnTitle = columnTitle.substr(1);
        }
        return ans;
    }
};
