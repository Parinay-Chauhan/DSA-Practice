/*
=========================================================
Platform         : LeetCode
Problem ID       : LC-0442
Problem          : Find All Duplicates in an Array
Topics           : Arrays, Hashing (Index Marking)
Difficulty       : Medium
Approach         : Negative Index Marking
Time Complexity  : O(n)
Space Complexity : O(1) Auxiliary
=========================================================
*/

#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> res;

        for(int i =0; i < nums.size(); i++){
            int idx = abs(nums[i]) -1;

            if( nums[idx] < 0){
                res.push_back(abs(nums[i]));
            } else {
                nums[idx] = -nums[idx];
            }
        }

        return res;
    }
};