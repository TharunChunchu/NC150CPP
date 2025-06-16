class Solution {
public:
    bool check(vector<int> piles, int t,int h){
        long c=0;
        for(auto i:piles){
            c+=(i/t);
            if(i%t)c+=1;
        }
        return c<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ma=INT_MIN;
        for(auto i:piles){
            ma=max(ma,i);
        }
        int i=1,j=ma; 
        int ans=j;
        while(i<=j){
            int mid=(i+j)/2;
            if(check(piles,mid,h)){
                ans=mid;
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return ans;
    }
};