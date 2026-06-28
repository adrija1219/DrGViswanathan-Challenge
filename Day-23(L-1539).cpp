//Leetcode 1539
//kth missing positive number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0, r= n-1;
        int mid=-1;
        while(l<=r){
           int mid = l+(r-l)/2;
           int no_of_missing_till_mid = arr[mid] - (mid+1);
           if(no_of_missing_till_mid< k){
            l=mid+1;
           }else{
            r=mid-1;
           }
        }
        return l+k;
    }
};
