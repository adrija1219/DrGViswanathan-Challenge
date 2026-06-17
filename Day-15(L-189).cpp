//Leetcode 189
//Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k%=n;  //normalise array
        reverse(nums.begin(), nums.end());  //reverse whole array
        reverse(nums.begin(), nums.begin()+k);  //reverse first k element
        reverse(nums.begin()+k, nums.end());     //reverse n-k element
    }
};
