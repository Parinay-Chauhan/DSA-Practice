/*
=========================================================
Platform          : Coding Ninjas
Problem           : Selection Sort
Algorithm         : Selection Sort
Topic             : Arrays, Sorting
Difficulty        : Easy
Approach          : Repeatedly Select Minimum
Best Time         : O(n²)
Average Time      : O(n²)
Worst Time        : O(n²)
Time Complexity   : O(n²)
Space Complexity  : O(1)
Stable            : No
In-place	      : Yes
Adaptive	      : No
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/

#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n)
{

    for (int i = 0; i <= n - 2; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}