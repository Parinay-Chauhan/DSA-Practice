/*
=========================================================
Platform         : Coding Ninjas
Problem          : Duplicate in Array
Topic            : Arrays, Hashing
Difficulty       : Easy
Approach         : XOR Operation
Time Complexity  : O(n)
Space Complexity : O(1)
Note             : Solution is stored in the original platform submission format.
=========================================================
*/



int findDuplicate(vector<int> &arr) 
{
    // Write your code here

    int ans = 0;

       // XOR on all array elements
    for(int i =0; i< arr.size(); i++){
        ans  = ans ^ arr[i];
    }

    // XOR [ 1, n-1]

    for(int i =1; i < arr.size(); i++){
        ans = ans ^ i;
    }

    return ans;
	
}
