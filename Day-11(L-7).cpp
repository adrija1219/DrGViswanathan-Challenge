//Leetcode 7
//Reverse integer

class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        while( n != 0){
            int m=n % 10;
            n= n/10;
            if( rev > INT_MAX /10 || rev < INT_MIN / 10){
               return 0;
            }
            rev = (rev * 10) +m;
             
        }
        return rev;
    }
};
