class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0;
        int ps=0;
        unordered_map<int,int> ump;
        ump[0]=1;
        for(int i=0;i<n;i++){
            ps+=nums[i];
            if(ump.find(ps-k)!=ump.end()){
                res+=ump[ps-k];
            }
            ump[ps]+=1;
        }
        return res;
    }
};