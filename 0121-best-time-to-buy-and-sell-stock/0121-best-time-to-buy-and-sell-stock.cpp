class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=prices[0];
        int res=0;
        for(auto i:prices){
            res=max(res,i-mi);
            mi=min(mi,i);
        }
        return res;
    }
};