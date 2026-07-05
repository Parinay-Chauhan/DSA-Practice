/*
=========================================================
Platform      : LeetCode
Problem ID    : LC-1009
Problem       : Power of Two
Topic         : Bit Manipulation
Difficulty    : Easy
Approach      : Bit Masking Approach
Time          : O(log₂N) (or O(1) for fixed 32-bit integers)
Space         : O(1)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/


class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if(n == 0){
            return 1;
        }

        while( m != 0){
            mask = ( mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};