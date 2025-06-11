#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestConsecutive(vector<int>& nums1) {
        unordered_set<int> us;
        for(auto i:nums1)us.insert(i);

        vector<int> nums(us.begin(),us.end());
        int mr=0;
        for(auto i:nums){
            if(us.find(i-1)==us.end()){
                int cr=1;
                int cn=i+1;
                while(us.find(cn)!=us.end()){
                    cr+=1;
                    cn+=1;
                }
                mr=max(mr,cr);
            }
        }
        return mr;
    }
int main(){
    vector<int> v1{0,3,7,2,5,8,4,6,0,1};  
    cout<<longestConsecutive(v1)<<endl;  

    return 0;
}