/*
=========================================================
Platform      : LeetCode
Problem ID    : LC-0231
Problem       : Power of Two
Topic         : Math, Bit Manipulation, Recursion
Difficulty    : Easy
Approach      : Iterative (Multiplication) Approach
Time          : O(31) or O(1)
Space         : O(1)
=========================================================
*/



class Solution {
public:
    bool isPowerOfTwo(int n) {
         int ans = 1;

         for(int i =0; i <= 30; i++){
            if( ans == n){
                return true;
            }

            if(ans < INT_MAX/2){
             ans = ans * 2;
            }
        }
            return false;
    }
};