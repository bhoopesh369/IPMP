class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber){
            int r = columnNumber%26;
            if(r==0) {
                ans.insert(0,1,'Z');
                columnNumber /= 26;
                columnNumber -= 1;
            }
            else{
               ans.insert(0,1,char(64+r));
               columnNumber /= 26;
            }
        }
        return ans;
    }
};

