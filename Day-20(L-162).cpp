//leetcode 162
//Find Peak element 
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return 0;
        int lo= 0, hi=n-1;
        while(lo<=hi){
            int mid= (hi+lo)/2;
            if((mid ==0 || nums[mid-1] <= nums[mid]) && (mid == n-1 || nums[mid+1] <= nums[mid])){
              return mid;
            }else if(mid > 0 && nums[mid-1]> nums[mid]){
               hi= mid - 1;;
            }else{
               lo= mid+1;
            }
        }
        return -1;
        
    }
};
