/*
=========================================================
Platform            : LeetCode
Problem ID          : LC-1207
Problem             : Unique Number of Occurrences
Topic               : Array, Hash Table
Difficulty          : Easy
Approach            : Hash Map + Hash Set
Time Complexity     : O(n) (average)
Space Complexity    : O(n) (worst case)
Note                : Solution is stored in the original platform submission format.
=========================================================
*/

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {

        unordered_map<int, int> freq;

        // Count frequency
        for (int num : arr)
        {
            freq[num]++;
        }

        unordered_set<int> st;

        // Check uniqueness of frequencies
        for (auto it : freq)
        {
            if (st.count(it.second))
                return false;

            st.insert(it.second);
        }

        return true;
    }
};