class CustomCmp{
    public:
    bool operator()(vector<int> v1, vector<int> v2){
        return v1[0]<v2[0];
    }
};
class Solution {
public:


    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),CustomCmp());
        vector<vector<int>> sol;
        int n=intervals.size();
        sol.push_back(intervals[0]);
        for(auto i:intervals){
            cout<<i[0]<<" "<<i[1]<<endl;
        }
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