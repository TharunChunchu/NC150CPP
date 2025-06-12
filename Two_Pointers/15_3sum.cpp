#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> res;
        for(int i=0;i<n-2;i++){
            while(i!=0 && i<n-2 && nums[i]==nums[i-1])i++;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int cs=nums[i]+nums[j]+nums[k];
                if(cs==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<n && nums[j]==nums[j-1])j++;
                }else if(cs<0){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return res;
    }
int main(){
    vector<int> v{-1,0,1,2,-1,-4};
    vector<vector<int>> res=threeSum(v);
    for(auto i:res){
     cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
    }
   

    return 0;
}