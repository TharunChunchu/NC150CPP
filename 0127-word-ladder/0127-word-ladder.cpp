class Solution {
public:
    bool check(string s1,string s2){
        int diff=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])diff++;
            if(diff>1)return false;
        }
        return true;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
        unordered_map<string,vector<string>> ump;
        for(int i=0;i<n;i++){
            if(check(beginWord,wordList[i])){
                ump[beginWord].push_back(wordList[i]);
            }
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(check(wordList[i],wordList[j])){
                    ump[wordList[i]].push_back(wordList[j]);
                    ump[wordList[j]].push_back(wordList[i]);

                }
            }
        }
        queue<string> q;
        q.push(beginWord);
        int res=1;
        unordered_set<string> us;
     
        while(!q.empty()){
            
            int n=q.size();
            for(int i=0;i<n;i++){
                string tmp=q.front();
                us.insert(tmp);
                q.pop();
                for(auto nbr:ump[tmp]){
                    if(nbr==endWord)return res+1;
                    if(us.find(nbr)==us.end()){
                        q.push(nbr);
                    }
                }
            }
            res++;
        }
        return 0;
    }
};