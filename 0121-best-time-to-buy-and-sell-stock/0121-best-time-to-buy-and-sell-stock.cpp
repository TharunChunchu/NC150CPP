class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ms=prices[0];
        int res=0;
        for(auto i:prices){
            ms=min(ms,i);
            res=max(res,i-ms);
        }
        return res;
    }
};