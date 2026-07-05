/*
=========================================================
Platform      : LeetCode
Problem ID    : LC-1281
Problem       : Subtract the Product and Sum of Digits of an Integer
Topic         : Math, Bit Manipulation, Recursion
Difficulty    : Easy
Approach      : Digit Extraction Approach
Time          : O(log₁₀N)
Space         : O(1)
Note          : Solution is stored in the original platform submission format.
=========================================================
*/


class Solution{
  public:
         int subtractProductAndSum(int n){
   
      
      int prod = 1;
      int sum =  0;
      
      while(n!= 0){
          int digit = n%10;
          prod = prod * digit;
          sum = sum + digit;
          
          n = n/10;
        }
        int answer = prod - sum;
        return answer;
    }
};