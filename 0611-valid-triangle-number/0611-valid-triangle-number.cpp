class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int a=nums[i],b=nums[j],c=nums[k];
                    if(a+b>c && a+c>b && b+c>a)res++;
                }
            }
        }
        return res;
    }
};