/*
=========================================================
Platform         : Coding Ninjas
Problem          : Intersection Of Two Sorted Arrays
Topic            : Arrays
Difficulty       : Easy
Approach         : Two Pointers
Time Complexity  : O(n + m)
Space Complexity : O(1)
=========================================================
*/

#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n,
                                  vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}