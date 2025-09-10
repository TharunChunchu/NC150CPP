class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> larr{1},rarr{1};
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            larr.push_back(larr[i]*nums[i]);
            rarr.push_back(rarr[i]*nums[n-i-1]);
        }
        for(int i=0;i<n;i++){
            larr[i]=larr[i]*rarr[n-i-1];
        }
        return larr;
    }
};