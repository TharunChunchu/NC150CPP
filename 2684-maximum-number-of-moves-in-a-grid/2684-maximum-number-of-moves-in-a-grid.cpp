class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> sol(m,vector<int>(n,0));
        int ans=0;

        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                if(j==0){
                    sol[i][j]=1;
                }else{

                    if(grid[i][j]>grid[i][j-1] && sol[i][j-1]>0){
                        sol[i][j]=max(sol[i][j],1+sol[i][j-1]);
                    }
                    if(i-1>=0 && grid[i][j]>grid[i-1][j-1]&& sol[i-1][j-1]>0){
                        sol[i][j]=max(sol[i][j],1+sol[i-1][j-1]);
                    }
                    if(i+1<m && grid[i][j]>grid[i+1][j-1]&& sol[i+1][j-1]>0){
                        sol[i][j]=max(sol[i][j],1+sol[i+1][j-1]);
                    }
                    if(sol[i][j]-1>ans){
                        ans=sol[i][j]-1;
                    }
                }
            }
        }


        return ans;
    }
};