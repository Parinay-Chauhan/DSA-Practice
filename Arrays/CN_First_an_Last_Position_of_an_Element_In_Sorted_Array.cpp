/*
=========================================================
Platform      : Coding Ninjas
Problem       : First and Last Position of an Element In Sorted Array
Topic         : Arrays, Binary Search, Searching
Difficulty    : Easy
Approach      : Binary Search for First & Last Occurrence
Time          : O(log n)
Space         : O(1)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/

#include <bits/stdc++.h>

int firstOcc(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);

    return p;
}