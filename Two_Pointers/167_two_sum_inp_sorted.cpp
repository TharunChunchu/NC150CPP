#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> nums, int target) {
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        int cs=nums[i]+nums[j];
        if(cs==target){
            return {i+1,j+1};
        }else if(cs<target){
            i++;
        }else{
            j--;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> res=twoSum({2,7,11,15},9);
    cout<<res[0]<<" "<<res[1]<<endl;

    return 0;
}