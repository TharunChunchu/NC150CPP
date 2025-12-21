class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int tb=points.size();
        int arrows=0;

        vector<pair<int,pair<char,int>>> bs;
        for(int i=0;i<points.size();i++){
            bs.push_back({points[i][0],{'e',i}});
            bs.push_back({points[i][1],{'s',i}});
        }
        unordered_set<int> us;
        sort(bs.begin(),bs.end());
        vector<int> tmp;
        for(auto i:bs){
            if(i.second.first=='e'){
                tmp.push_back(i.second.second);
            }else{
                if(us.find(i.second.second)==us.end()){
                    for(auto i:tmp){
                        us.insert(i);
                    }
                    arrows+=1;
                }
            }
        }
        return arrows;
    }
};