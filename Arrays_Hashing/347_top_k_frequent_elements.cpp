#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;
class CustomCmp{
    public:
    bool operator()(pair<int,int> p1,pair<int,int> p2){
        return p1.first>p2.first;
    }
};
vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(auto i:nums)ump[i]++;
        vector<int> res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,CustomCmp> pq;
        for(auto i:ump){
            if(pq.size()<k){
                pq.push({i.second,i.first});
            }else{
                if(pq.top().first<i.second){
                    pq.pop();
                    pq.push({i.second,i.first});
                }
            }
        }
        while(!pq.empty()){
            
            res.insert(res.begin(),pq.top().second);
            cout<<res[0]<<endl;
            pq.pop();

        }
        return res;
        
}

int main(){
    vector<int> v{1,1,1,2,2,3};
    int k=2;
    topKFrequent(v,k);
    return 0;
}