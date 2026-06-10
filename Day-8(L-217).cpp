//leetcode 217
//contains duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //naive approach - nested for loop
        //optimal approach - use a set
        unordered_set<int>set;

        for(int num: nums){
            if(set.contains(num)){
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};
