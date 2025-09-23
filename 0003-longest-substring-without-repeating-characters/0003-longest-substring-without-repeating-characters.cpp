class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> ump;
        int ml=0;
        int si=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(ump.find(s[i])!=ump.end()){
                si=max(si,ump[s[i]]+1);
            }
            ump[s[i]]=i;
            ml=max(ml,i-si+1);
        }
        return ml;
    }
};