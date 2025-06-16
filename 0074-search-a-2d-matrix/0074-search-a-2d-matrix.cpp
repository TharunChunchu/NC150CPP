class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int j=m*n-1;   
        int i=0;
        while(i<=j){
            int mid=(i+j)/2;
            int k=mid/n,l=mid%n;
            if(matrix[k][l]==target){
                return true;
            }else if(matrix[k][l]<target){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return false;
    }
};