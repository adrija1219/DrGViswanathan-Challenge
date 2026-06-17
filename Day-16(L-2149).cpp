//Leetcode 2149
// Reaarange elements by sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int>result(n);

        int pos=0, neg= 1;  //two pointer
        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                result[pos] = nums[i];
                pos+=2;
            }else{
                result[neg] = nums[i];
                neg+=2;
            }
        }
        return result;
    }
};
