/*
=========================================================
Platform          : LeetCode
Problem ID        : LC-07
Problem           : Reverse Integer
Topic             : Math
Difficulty        : Medium
Approach          : Digit Extraction and Reverse Approach or  Mathematical Reversal Approach
Time Complexity   : O(log₁₀N) (or O(1) for fixed 32-bit integer)
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
=========================================================
*/



class Solution {
public:
    int reverse(int x) {

        int ans = 0;
        // while(x ! = 0){
            while(x != 0){
            int digit = x % 10;

            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x/10;
        }
        return ans;
    }
};