/*
=========================================================
Platform          : Coding Ninjas
Problem           : Painter's Partition Problem
Topic             : Arrays, Binary Search, Greedy
Difficulty        : Moderate
Approach          : Binary Search on Answer
Time Complexity   : O(n × log(sum(boards)))
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/

bool isPossible(vector<int> &boards, int k, int mid)
{

    int painter = 1;
    int currentTime = 0;

    for (int i = 0; i < boards.size(); i++)
    {

        if (currentTime + boards[i] <= mid)
        {

            currentTime += boards[i];
        }
        else
        {

            painter++;

            if (painter > k || boards[i] > mid)
                return false;

            currentTime = boards[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int sum = 0;

    for (int x : boards)
        sum += x;

    int low = *max_element(boards.begin(), boards.end());
    int high = sum;

    int ans = -1;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (isPossible(boards, k, mid))
        {

            ans = mid;
            high = mid - 1;
        }
        else
        {

            low = mid + 1;
        }
    }

    return ans;
}