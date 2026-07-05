/*
=========================================================
Platform      : LeetCode
Problem ID    : LC-02540
Problem       : Minimum Common Value
Topic         : Array, Two Pointers, Hash Table, Binary Search, 
Difficulty    : Easy
Approach      : Two Pointer Approach
Time          : O(n + m)
Space         : O(1)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/



class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return -1;
    }
};