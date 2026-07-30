/*
=========================================================
Platform          : Coding Ninjas
Problem           : Allocate Books
Topic             : Arrays, Binary Search, Greedy
Difficulty        : Moderate
Approach          : Binary Search on Answer
Time Complexity   : O(m × log(sum(time)))
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/

#include <bits/stdc++.h>

bool isPossible(vector<int> &time, int n, int m, long long mid)
{

    int dayCount = 1;
    long long timeSum = 0;

    for (int i = 0; i < m; i++)
    {

        if (timeSum + time[i] <= mid)
        {

            timeSum += time[i];
        }
        else
        {

            dayCount++;

            if (dayCount > n || time[i] > mid)
                return false;

            timeSum = time[i];
        }
    }

    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long sum = 0;

    for (int x : time)
        sum += x;

    long long s = *max_element(time.begin(), time.end());
    long long e = sum;

    long long ans = -1;

    while (s <= e)
    {

        long long mid = s + (e - s) / 2;

        if (isPossible(time, n, m, mid))
        {

            ans = mid;
            e = mid - 1;
        }
        else
        {

            s = mid + 1;
        }
    }

    return ans;
}