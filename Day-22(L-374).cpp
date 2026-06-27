//leetcode 374
//Guess number Higher or lower

class Solution {
public:
    int guessNumber(int n) {
        int lo=1, hi=n;
        while(lo<=hi){
            int guess_no=lo+(hi-lo)/2;
            int val = guess(guess_no);  //metioned in the question to call guess function
            if(val == 0){ //guess is correct
               return guess_no;
            }else if(val == -1){
                hi=guess_no-1;  //search left side
            }else{
                lo=guess_no+1;   //search right side
            }
        }
        return -1;       
    }
};
