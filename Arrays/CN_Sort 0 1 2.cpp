/*
=========================================================
Platform          : Coding Ninjas
Problem           : Sort 0 1 2
Topic             : Arrays, Two Pointers
Difficulty        : Easy
Approach          : Dutch National Flag Algorithm
Pattern           : Three Pointer Partitioning
Time Complexity   : O(n)
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/

void sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}