class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> ump;
        for(auto i:arr)ump[i]+=1;
        int res=-1;
        for(auto p:ump){
            if(p.first==p.second && p.first>res){
                res=p.first;
            }
        }
        return res;
    }
};