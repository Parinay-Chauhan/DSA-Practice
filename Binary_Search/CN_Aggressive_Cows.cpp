/*
=========================================================
Platform          : Coding Ninjas
Problem           : Aggressive Cows
Topic             : Arrays, Binary Search, Greedy
Difficulty        : Moderate
Approach          : Binary Search on Answer
Time Complexity   : O(n log n + n × log(maxDistance))
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/


bool isPossible(vector<int> &stalls, int k, int mid)
{

    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < stalls.size(); i++)
    {

        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;

            if (cowCount == k)
            {

                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;

    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int e = maxi;
    int ans = -1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (isPossible(stalls, k, mid))
        {

            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
