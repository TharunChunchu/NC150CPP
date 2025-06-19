class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=3){
            vector<int> tmp{nums[i]};
            for(int j=1;j<3;j++){
                if(nums[i+j]-nums[i+j-1]<=k){
                    tmp.push_back(nums[i+j]);
                }else{
                    return {};
                }
            }
            if(tmp[2]-tmp[0]>k)return {};
            res.push_back(tmp);
        }
        return res;
    }
};