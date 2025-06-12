#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// for anagrams sorted string is same use a map to track the group it belongs to
vector<vector<string>> groupAnagrams(vector<string> strs) {
    vector<vector<string>> res;
    unordered_map<string,vector<string>> ump;
    for(auto i:strs){
        string s=i;
        sort(s.begin(),s.end());
        if(ump.find(s)!=ump.end()){
            ump[s].push_back(i);
        }else{
            ump[s]={i};
        }
    }
    for(auto i:ump){
        res.push_back(i.second);
    }
    return res;
}
int main(){
    vector<string> v{"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> res=groupAnagrams(v);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}