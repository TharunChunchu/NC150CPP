class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> res;
       unordered_map<string,vector<string>> ump;
       for(auto i:strs){
        string key=i;
        sort(key.begin(),key.end());
        ump[key].push_back(i);
       }
       for(auto i:ump){
        res.push_back(i.second);
       }
       return res; 
    }
};