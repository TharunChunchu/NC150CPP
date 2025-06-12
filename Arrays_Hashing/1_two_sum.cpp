#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
//we use map to keep the visited elemets and their indexes and we try to find the target - curr val in the map for faster search and return pair once we find it
vector<int> twoSum(vector<int> nums, int target) {
    unordered_map<int,int> ump;
    for(int i=0;i<nums.size();i++){
        if(ump.find(target-nums[i])!=ump.end()){
            return {ump[target-nums[i]],i};
        }
        ump[nums[i]]=i;
    }
    return {-1,-1};

}
int main(){
    vector<int> v{2,6,7,11,15};
    int target=9;
    vector<int> res=twoSum(v,target);
    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}