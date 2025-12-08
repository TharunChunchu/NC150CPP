class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int> ump;
        for(auto ch:s){
            ump[ch]++;
        }
        for(auto ch:t){
            ump[ch]--;
            if(ump[ch]<0){
                return false;
            }
        }
        return true;
    }
};