/*
=========================================================
Platform          : Coding Ninjas
Problem           : Insertion Sort
Algorithm         : Insertion Sort
Topic             : Arrays, Sorting
Difficulty        : Easy
Approach          : Insert Current Element into Sorted Part
Best Time         : O(n)
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
void insertionSort(int n, vector<int> &arr)
{

    for (int i = 1; i < n; i++)
    {

        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}