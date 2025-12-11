class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> ump;
        int si=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(ump.find(s[i])!=ump.end())si=max(si,ump[s[i]]+1);

            ans=max(ans,i-si+1);
            ump[s[i]]=i;
        }
        return ans;
    }
};