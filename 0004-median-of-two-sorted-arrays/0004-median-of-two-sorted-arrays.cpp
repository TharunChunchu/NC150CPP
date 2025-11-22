class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

     int i=0;
     int j=0;
     int m=nums1.size(),n=nums2.size();
     vector<double> res;
     while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            res.push_back(nums1[i]);
            i++;
        }else{
            res.push_back(nums2[j]);
            j++;
        }
     }
     while(i<m){
            res.push_back(nums1[i]);
            i++;
     }
     while(j<n){
            res.push_back(nums2[j]);
            j++;
     }
    if((m+n)%2){
        return res[int((m+n)/2)];
    }
    return (res[int((m+n)/2)]+res[int((m+n-1)/2)])/2;
    
    }
};
