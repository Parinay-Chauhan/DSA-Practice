/*
=========================================================
Platform      : Coding Ninjas
Problem       : Find Unique Element
Topic         : Arrays, Bit Manipulation
Difficulty    : Easy
Approach      : XOR Approach
Time          : O(n)
Space         : O(1)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/



int findUnique(int *arr, int size)
{
    
    int ans = 0;

    for( int i =0; i<size; i++){

        ans ^= arr[i];
    }

    return ans;

}