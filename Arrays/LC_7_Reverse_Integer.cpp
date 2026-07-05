/*
=========================================================
Platform          : LeetCode
Problem ID        : LC-07
Problem           : Reverse Integer
Topic             : Math
Difficulty        : Medium
Approach          : String Conversion
Time Complexity   : O(n)
Space Complexity  : O(n)
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