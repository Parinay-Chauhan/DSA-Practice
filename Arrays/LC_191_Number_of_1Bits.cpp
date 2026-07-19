/*
=========================================================
Platform            : LeetCode
Problem ID          : LC-191
Problem             : Number of 1 Bits
Topic               : Bit Manipulation, Bitwise Operators 
Difficulty          : Easy
Approach            : Right Shift + Bitwise AND Approach
Time Complexity     : O(1) for 32-bit integers
Space Complexity    : O(1)
Note                : Solution is stored in the original platform submission format.
=========================================================
*/


class Solution {
public:
    int hammingWeight(int n) {
    
        int count = 0;
        while(n!=0) {
            
            if(n&1) {
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};