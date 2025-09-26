class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int i=0,j=n-1;

        while(i<=j){
            int mid=(i+j)/2;

            if((mid==0 && nums[mid]<nums[mid+1]) || (mid==n-1 && nums[mid]<nums[mid-1]) || (nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]) ){
                return nums[mid];
            }else if(nums[mid]>=nums[0] && nums[mid]>nums[n-1]){
                    i=mid+1;
            }else{
              
                    j=mid-1;
           
            }
        }
        return -1;
    }
};
