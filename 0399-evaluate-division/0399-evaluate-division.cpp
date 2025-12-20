class Solution {
public:
    double findpath(unordered_map<string,unordered_map<string,double>> ump,string s1,string s2)  {
        if(ump.find(s1)==ump.end() || ump.find(s2)==ump.end() )return -1;
        queue<pair<string,double>> q;
        q.push({s1,1});
        unordered_set<string> us;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                pair<string,double> tmp=q.front();
                q.pop();
                us.insert(tmp.first);
                if(tmp.first==s2){
                    return tmp.second;
                }
                for(auto nbr:ump[tmp.first]){
                    if(us.find(nbr.first)==us.end()){
                        q.push({nbr.first,tmp.second*nbr.second});
                    }
                }

            }
        }
        return -1;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
     unordered_map<string,unordered_map<string,double>>    ump;
      vector<double> res;
     for(int i=0;i<equations.size();i++){
        string from=equations[i][0];
        string to=equations[i][1];
        ump[from][to]=values[i];
        ump[to][from]=1/values[i];
     }
   
     for(auto i:queries){
        res.push_back(findpath(ump,i[0], i[1]));
     }
     return res;
    }
};