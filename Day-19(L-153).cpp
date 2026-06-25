//Leetcode 153
//Find Minimumm in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int lo=0, hi=n-1;
        while(lo<hi){
            int mid =  (hi+lo)/2;
            if(nums[mid] > nums[hi]){
                lo= mid+1;
            }else{
                hi= mid;   //main point
            }
        }
        return nums[hi]; 
    }
};
