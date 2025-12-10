class Solution {
public:
    bool isPalindrome(string s1) {
        string s="";
        for(auto ch:s1){
            if(isalnum(ch))s+=tolower(ch);
        }
        int i=0, j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};