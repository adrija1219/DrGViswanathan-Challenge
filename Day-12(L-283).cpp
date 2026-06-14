//Leetcode 283
//Move Zeroes to end
//Approach two pointer and swapping
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n= nums.size();  
        for(int i=0; i<n; i++){   //two pointers 
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
