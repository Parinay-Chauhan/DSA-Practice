/*
=========================================================
Platform          : Coding Ninjas
Problem           : Sort 0 1
Topic             : Arrays, Two Pointers
Difficulty        : Moderate
Approach          : Two Pointers Approach
Time Complexity   : O(n)
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/

void sortZeroesAndOne(int input[], int size)
{
    int left = 0, right = size - 1;

    while (left < right)
    {

        while (input[left] == 0 && left < right)
        {
            left++;
        }

        while (input[right] == 1 && left < right)
        {
            right--;
        }

        if (left < right)
        {
            swap(input[left], input[right]);
            left++;
            right--;
        }
    }
}
