class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int mn=prices[0];
        for(auto i:prices){
            mn=min(mn,i);
            res=max(res,i-mn);
        }
        return res;
    }
};