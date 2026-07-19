/*
=========================================================
Platform          : Coding Ninjas
Problem           : Intersection Of Two Sorted Arrays
Topic             : Arrays
Difficulty        : Easy
Approach          : Iterative / Adjacent Pair Swapping
Time Complexity   : O(n)
Space Complexity  : O(1)
Note              : Solution is stored in the original platform submission format.
Note              : Code360 is the new name of CodeStudio by Coding Ninjas.
=========================================================
*/



void swapAlternate(int *arr, int size)
{
   
    for(int i = 0; i < size; i+=2){
       if( i + 1 < size){
           swap(arr[i], arr[ i + 1]);
       }
    }
}