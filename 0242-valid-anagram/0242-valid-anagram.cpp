class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ump;
        for(auto ch:s){
            ump[ch]++;
        }
        for(auto ch:t){
            if(ump[ch]==0){
                return false;
            }
            ump[ch]--;

        }
        for(auto it:ump){
            if(it.second>=1){
                return false;
            }
        }
        return true;
    }
};