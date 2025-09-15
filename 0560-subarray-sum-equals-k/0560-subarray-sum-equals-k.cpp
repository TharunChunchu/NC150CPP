class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        ump[0]=1;
        int ps=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            ps+=nums[i];
            if(ump.find(ps-k)!=ump.end()){
                res+=ump[ps-k];
            }
            ump[ps]++;

        }
        return res;
    }
};