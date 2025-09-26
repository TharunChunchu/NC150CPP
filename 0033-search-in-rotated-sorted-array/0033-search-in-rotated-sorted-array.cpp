class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j){
            cout<<i<<" "<<j<<endl;
            int mid=(i+j)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=nums[0]){
                if(target>nums[mid] || target<nums[0]){
                    i=mid+1;
                }else{
                    j=mid-1;
                }
            }else{
                if(target<nums[mid] || target>nums[n-1]){
                    j=mid-1;
                }else{
                    i=mid+1;
                }
            }
        }
        return -1;
    }
};