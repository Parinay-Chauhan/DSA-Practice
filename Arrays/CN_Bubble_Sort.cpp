/*
=========================================================
Platform          : Coding Ninjas
Problem           : Bubble Sort
Algorithm         : Bubble Sort
Topic             : Arrays, Sorting
Difficulty        : Easy
Approach          : Adjacent Swapping
Best Time         : O(n) (Optimized)
Average Time      : O(n²)
Worst Time        : O(n²)
Space Complexity  : O(1)
Stable            : Yes
In-place	      : Yes
Adaptive	      : Yes
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/

#include <bits/stdc++.h>
#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n)
{
    bool swapped = false;

    for (int i = 1; i < n; i++)
    {

        swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}
