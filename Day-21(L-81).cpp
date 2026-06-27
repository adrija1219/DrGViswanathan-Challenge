//Leetcode 81
//Search in a Rotated sorted array ii

class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                return true;
            }
            // We cannot determine which half is sorted, so we safely shrink the window.
            if (nums[l] == nums[mid] && nums[mid] == nums[r]) {
                l++;
                r--;
            }
            // Left half is sorted
            else if (nums[l] <= nums[mid]) {
                // Check if target lies within the sorted left half
                if (nums[l] <= target && target < nums[mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            // Right half is sorted
            else {
                // Check if target lies within the sorted right half
                if (nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};
