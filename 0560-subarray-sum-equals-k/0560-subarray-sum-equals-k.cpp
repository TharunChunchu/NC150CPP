class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            int cs=0;
            for(int j=i;j<n;j++){
                cs+=nums[j];
                if(cs==k)res++;
            }
        }
        return res;
    }
};