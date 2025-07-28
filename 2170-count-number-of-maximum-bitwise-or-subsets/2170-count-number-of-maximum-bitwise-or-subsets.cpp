class Solution {
public:
    int solve(vector<int> nums,int n,int &ma,int c){
        if(c==ma){
            return pow(2,n);
        }
        if(n==0){
            return 0;
        }
        cout<<c<<endl;

        return solve(nums,n-1,ma,c)+solve(nums,n-1,ma,c|nums[n-1]);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int ma=0;
        for(int i=0;i<n;i++)ma|=nums[i];
        cout<<ma;
        return solve(nums,n,ma,0);
    }
};