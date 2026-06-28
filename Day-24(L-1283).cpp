//Leetcode 1283
//Fins the smallest divisor given a threshold
class Solution {
public:
    int SumByD(vector<int>& nums, int div){
        int sum = 0;
        int n= nums.size();
        for(int i=0; i<n; i++){
            sum += ceil((double)nums[i]/(double)div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo=1, hi=*max_element(nums.begin(), nums.end());
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(SumByD(nums, mid)<= threshold){
                hi= mid-1;
            }else{
                lo=mid+1;
            }
        }
        return lo;
    }
};
