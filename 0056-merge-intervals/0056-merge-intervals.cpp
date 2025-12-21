
class Solution {
public:


    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> sol;
        int n=intervals.size();
        sol.push_back(intervals[0]);
 
        int k=0;
        for(int i=1;i<n;i++){
            if(sol[k][1]>=intervals[i][0]){
                sol[k][1]=max(sol[k][1],intervals[i][1]);
            }else{
                sol.push_back(intervals[i]);
                k++;
            }
            
        }
        return sol;
    }
};