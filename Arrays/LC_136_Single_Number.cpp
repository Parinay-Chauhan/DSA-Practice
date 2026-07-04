/*
=========================================================
Platform         : LeetCode
Problem          : Single Number
Topic            : Arrays, Bit Manipulation
Difficulty       : Easy
Approach         : XOR Operation
Time Complexity  : O(n)
Space Complexity : O(1)
Note             : Solution is stored in the original platform submission format.
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