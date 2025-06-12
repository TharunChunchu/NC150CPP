#include<iostream>
#include<vector>
using namespace std;
//keeping a left and right product array and ine one loop we multiply them to get final product
vector<int> productExceptSelf(vector<int> nums, int target) {
    vector<int> lp{1},rp{1};
    for(int i=0;i<nums.size()-1;i++){
        lp.push_back(lp[i]*nums[i]);
        rp.push_back(rp[i]*nums[nums.size()-i-1]);
    }
    for(auto i:lp){
        cout<<i<<" ";
    }
    reverse(rp.begin(),rp.end());
    cout<<endl;
        for(auto i:rp){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<nums.size();i++){
        lp[i]*=rp[i];
    }
    return lp;
}
int main(){
    // vector<int> v{-1,1,0,-3,3};
        vector<int> v{1,2,3,4};

    int target=9;
    vector<int> res=productExceptSelf(v,target);
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}