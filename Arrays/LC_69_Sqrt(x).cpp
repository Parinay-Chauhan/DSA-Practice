/*
=========================================================
Platform           : LeetCode
Problem ID         : LC-69
Problem            : Sqrt(x)
Topic              : Math, Binary Search
Difficulty         : Easy
Approach           : Binary Search on Search Space
Time Complexity    : O(log x)
Space Complexity   : O(1)
Note               : Solution is stored in the original platform submission format.
=========================================================
*/



class Solution
{
public:
    long long binarySearch(int n)
    {

        int start = 0;
        int end = n;
        long long int mid = start + (end - start) / 2;
        long long int ans = -1;
        while (start <= end)
        {

            long long int square = mid * mid;

            if (square == n)
            {
                return mid;
            }
            else if (square < n)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }
        return ans;
    }

    int mySqrt(int x)
    {

        return binarySearch(x);
    }
};