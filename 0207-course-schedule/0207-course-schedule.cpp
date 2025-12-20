class Solution {
public:
    bool canFinish(int num_courses, vector<vector<int>>& prerequisites) {

        unordered_map<int,vector<int>> ump;
        unordered_map<int,int> idg_map;
        for(auto i:prerequisites){
            int from=i[1],to=i[0];
            ump[from].push_back(to);
            idg_map[to]++;
        }
        queue<int> q;
        for(int i=0;i<num_courses;i++){
            if(idg_map[i]==0)q.push(i);
        }
        while(!q.empty()){
            for(int i=0;i<q.size();i++){
                int tmp=q.front();
                num_courses--;
                q.pop();
                for(auto nbr:ump[tmp]){
                    idg_map[nbr]--;
                    if(idg_map[nbr]==0)q.push(nbr);
                }
            }
        }
        return num_courses==0;
    }
};