/*
=========================================================
Platform          : LeetCode
Problem ID        : LC-0136
Problem           : Single Number
Topic             : Array, Bit Manipulation
Difficulty        : Easy
Approach          : XOR Approach or Bit Manipulation (XOR) Approach
Time Complexity   : O(n)
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
=========================================================
*/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            ans ^= val;
        }

        return ans;
    }
};