class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> ms,ss;
        int counter=t.size();
        for(auto i:t)ss[i]++;
        bool flag=true;
        int si=0,ei=s.size()-1;
        int i=0;
        int n=s.size();
        int res=s.size();
        for(int j=0;j<n;j++){
            if(ms[s[j]]<ss[s[j]])counter--;
            ms[s[j]]++;
            while(counter==0 && i<n){
                flag=false;
                if(j-i+1<res){
                    res=j-i+1;
                    si=i;
                    ei=j;
                }

                if(ms[s[i]]==ss[s[i]]){
                    counter++;
                }
                ms[s[i]]--;

                i++;
            }

        }
        if(flag)return "";
        return s.substr(si,ei-si+1);
    }
};